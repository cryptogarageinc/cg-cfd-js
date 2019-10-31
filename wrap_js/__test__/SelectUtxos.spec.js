const {SelectUtxos} = require('../cfdjs_raw_module');
const TestHelper = require('./TestHelper');

const emptyFunc = () => {};
const convertFunc = (jsonString) => {
  const parseResult = JSON.parse(jsonString);
  try {
    const amount = parseResult.utxos.reduce((acc, cur) => (
      acc + cur.amount
    ), 0);
    const coinNum = parseResult.utxos.length;
    return {amount, coinNum};
  } catch (err) {
    console.log(err.name + ': ' + err.message);
    throw err;
  }
};

const COIN_BASE = 100000000;
const ZERO_BASE = '0000000000000000000000000000000000000000000000000000000000000000';
const FIXED_DESCRIPTOR = 'sh(wpkh([ef735203/0\'/0\'/5\']03948c01f159b4204b682668d6e850440564b6610c0e5bf30da684b2131f77c449))#2u75feqc';

const testUtxo = (coinAmount, utxos) => {
  const amount = coinAmount * COIN_BASE;
  // 32byte hexになるようにパディング
  const txid = (ZERO_BASE + amount).slice(-64);
  const vout = 0;
  if (utxos.some((utxo) => utxo.txid === txid)) {
    utxos.forEach((utxo) => {
      if (utxo.txid === txid) ++vout;
    });
  }
  const descriptor = FIXED_DESCRIPTOR;
  utxos.push({txid, vout, amount, descriptor});
};
const testUtxos = (amounts = []) => {
  const results = [];
  amounts.forEach((amount) => {
    testUtxo(amount, results);
  });
  return results;
};
const clearUtxos = () => {
  utxos = [];
};

const FIXED_BITCOIN_FEE_INFO = {
  feeRate: 0,
  transaction: '02000000000000000000',
  isElements: false,
};

const testCase = [
  (() => {
    const utxos = testUtxos([1, 2, 5, 10, 20]);
    return TestHelper.createBitcoinTestCase(
      'SelectUtxos 38[1,2,5,10,20]coins, req: 37 coins',
      SelectUtxos,
      [JSON.stringify({
        utxos,
        targetAmount: (37 * COIN_BASE),
        feeInfo: FIXED_BITCOIN_FEE_INFO,
      })],
      {amount: (37 * COIN_BASE), coinNum: 4},
      emptyFunc,
      clearUtxos,
      convertFunc,
    );
  })(),
  (() => {
    const utxos = testUtxos([1, 2, 5, 10, 20]);
    return TestHelper.createBitcoinTestCase(
      'SelectUtxos 38[1,2,5,10,20]coins, req: 38 coins',
      SelectUtxos,
      [JSON.stringify({
        utxos,
        targetAmount: (38 * COIN_BASE),
        feeInfo: FIXED_BITCOIN_FEE_INFO,
      })],
      {amount: (38 * COIN_BASE), coinNum: 5},
      emptyFunc,
      clearUtxos,
      convertFunc,
    );
  })(),
  (() => {
    const utxos = testUtxos([1, 2, 5, 10, 20]);
    return TestHelper.createBitcoinTestCase(
      'SelectUtxos 38[1,2,5,10,20]coins, req: 34 coins',
      SelectUtxos,
      [JSON.stringify({
        utxos,
        targetAmount: (34 * COIN_BASE),
        feeInfo: FIXED_BITCOIN_FEE_INFO,
      })],
      {amount: (35 * COIN_BASE), coinNum: 3},
      emptyFunc,
      clearUtxos,
      convertFunc,
    );
  })(),
  (() => {
    const utxos = testUtxos([6, 7, 8, 20, 30]);
    return TestHelper.createBitcoinTestCase(
      'SelectUtxos 71[6,7,8,20,30]coins, req: 16 coins',
      SelectUtxos,
      [JSON.stringify({
        utxos,
        targetAmount: (16 * COIN_BASE),
        feeInfo: FIXED_BITCOIN_FEE_INFO,
      })],
      {amount: ( 20 * COIN_BASE), coinNum: 1},
      emptyFunc,
      clearUtxos,
      convertFunc,
    );
  })(),
  (() => {
    const utxos = testUtxos([6, 7, 8, 30]);
    return TestHelper.createBitcoinTestCase(
      'SelectUtxos 51[6,7,8,30]coins, req: 16 coins',
      SelectUtxos,
      [JSON.stringify({
        utxos,
        targetAmount: (16 * COIN_BASE),
        feeInfo: FIXED_BITCOIN_FEE_INFO,
      })],
      {amount: ( 21 * COIN_BASE), coinNum: 3},
      emptyFunc,
      clearUtxos,
      convertFunc,
    );
  })(),
  (() => {
    const utxos = testUtxos([0.1, 0.2, 0.3, 0.4, 0.5]);
    return TestHelper.createBitcoinTestCase(
      'SelectUtxos 5.5[0.1, 0.2, 0.3, 0.4, 0.5]coins, req: 1.0 coins',
      SelectUtxos,
      [JSON.stringify({
        utxos,
        targetAmount: (1.0 * COIN_BASE),
        feeInfo: FIXED_BITCOIN_FEE_INFO,
      })],
      {amount: ( 1.0 * COIN_BASE), coinNum: 4},
      emptyFunc,
      clearUtxos,
      convertFunc,
    );
  })(),
];

const errorCase = [
  (() => {
    const utxos = testUtxos();
    return TestHelper.createBitcoinTestCase(
      'SelectUtxos Error - empty coins, req: 1.0 coins',
      SelectUtxos,
      [JSON.stringify({
        utxos,
        targetAmount: (0.1 * COIN_BASE),
        feeInfo: FIXED_BITCOIN_FEE_INFO,
      })],
      '{\"error\":{\"code\":2,\"type\":\"illegal_state\",\"message\":\"Failed to select coin. Not enough utxos.\"}}'
    );
  })(),
  (() => {
    const utxos = testUtxos([1, 2]);
    return TestHelper.createBitcoinTestCase(
      'SelectUtxos Error - 3[1, 2]coins, req: 5.0 coins',
      SelectUtxos,
      [JSON.stringify({
        utxos,
        targetAmount: (5.0 * COIN_BASE),
        feeInfo: FIXED_BITCOIN_FEE_INFO,
      })],
      '{\"error\":{\"code\":2,\"type\":\"illegal_state\",\"message\":\"Failed to select coin. Not enough utxos.\"}}'
    );
  })(),
  (() => {
    const utxos = testUtxos([1, 2]);
    return TestHelper.createBitcoinTestCase(
      'SelectUtxos Error - empty fee info',
      SelectUtxos,
      [JSON.stringify({
        utxos,
        targetAmount: (1.0 * COIN_BASE),
      })],
      '{\"error\":{\"code\":1,\"type\":\"illegal_argument\",\"message\":\"transaction data invalid.\"}}'
    );
  })(),
  (() => {
    const utxos = testUtxos([1, 2]);
    return TestHelper.createBitcoinTestCase(
      'SelectUtxos Error - invalid transaction',
      SelectUtxos,
      [JSON.stringify({
        utxos,
        targetAmount: (1.0 * COIN_BASE),
        feeInfo: {
          feeRate: 0,
          transaction: '0200000000000000000000',
          isElements: false,
        },
      })],
      '{\"error\":{\"code\":1,\"type\":\"illegal_argument\",\"message\":\"transaction data invalid.\"}}'
    );
  })(),
];

const FIXED_ELEMENTS_FEE_INFO = {
  feeRate: 0,
  transaction: '0200000000000000000000',
  isElements: true,
};

const elementsTestCase = [
  (() => {
    const utxos = testUtxos([1, 2, 5, 10, 20]);
    return TestHelper.createBitcoinTestCase(
      'SelectUtxos - Elements - 38[1,2,5,10,20]coins, req: 37 coins',
      SelectUtxos,
      [JSON.stringify({
        utxos,
        targetAmount: (37 * COIN_BASE),
        feeInfo: FIXED_ELEMENTS_FEE_INFO,
      })],
      {amount: (37 * COIN_BASE), coinNum: 4},
      emptyFunc,
      clearUtxos,
      convertFunc,
    );
  })(),
  (() => {
    const utxos = testUtxos([1, 2, 5, 10, 20]);
    return TestHelper.createBitcoinTestCase(
      'SelectUtxos - Elements - 38[1,2,5,10,20]coins, req: 38 coins',
      SelectUtxos,
      [JSON.stringify({
        utxos,
        targetAmount: (38 * COIN_BASE),
        feeInfo: FIXED_ELEMENTS_FEE_INFO,
      })],
      {amount: (38 * COIN_BASE), coinNum: 5},
      emptyFunc,
      clearUtxos,
      convertFunc,
    );
  })(),
  (() => {
    const utxos = testUtxos([1, 2, 5, 10, 20]);
    return TestHelper.createBitcoinTestCase(
      'SelectUtxos - Elements - 38[1,2,5,10,20]coins, req: 34 coins',
      SelectUtxos,
      [JSON.stringify({
        utxos,
        targetAmount: (34 * COIN_BASE),
        feeInfo: FIXED_ELEMENTS_FEE_INFO,
      })],
      {amount: (35 * COIN_BASE), coinNum: 3},
      emptyFunc,
      clearUtxos,
      convertFunc,
    );
  })(),
  (() => {
    const utxos = testUtxos([6, 7, 8, 20, 30]);
    return TestHelper.createBitcoinTestCase(
      'SelectUtxos - Elements - 71[6,7,8,20,30]coins, req: 16 coins',
      SelectUtxos,
      [JSON.stringify({
        utxos,
        targetAmount: (16 * COIN_BASE),
        feeInfo: FIXED_ELEMENTS_FEE_INFO,
      })],
      {amount: ( 20 * COIN_BASE), coinNum: 1},
      emptyFunc,
      clearUtxos,
      convertFunc,
    );
  })(),
  (() => {
    const utxos = testUtxos([6, 7, 8, 30]);
    return TestHelper.createBitcoinTestCase(
      'SelectUtxos - Elements - 51[6,7,8,30]coins, req: 16 coins',
      SelectUtxos,
      [JSON.stringify({
        utxos,
        targetAmount: (16 * COIN_BASE),
        feeInfo: FIXED_ELEMENTS_FEE_INFO,
      })],
      {amount: ( 21 * COIN_BASE), coinNum: 3},
      emptyFunc,
      clearUtxos,
      convertFunc,
    );
  })(),
  (() => {
    const utxos = testUtxos([0.1, 0.2, 0.3, 0.4, 0.5]);
    return TestHelper.createBitcoinTestCase(
      'SelectUtxos - Elements - 5.5[0.1, 0.2, 0.3, 0.4, 0.5]coins, req: 1.0 coins',
      SelectUtxos,
      [JSON.stringify({
        utxos,
        targetAmount: (1.0 * COIN_BASE),
        feeInfo: FIXED_ELEMENTS_FEE_INFO,
      })],
      {amount: ( 1.0 * COIN_BASE), coinNum: 4},
      emptyFunc,
      clearUtxos,
      convertFunc,
    );
  })(),
];

const elementsErrorCase = [
  (() => {
    const utxos = testUtxos();
    return TestHelper.createBitcoinTestCase(
      'SelectUtxos - Elements - Error - empty coins, req: 1.0 coins',
      SelectUtxos,
      [JSON.stringify({
        utxos,
        targetAmount: (0.1 * COIN_BASE),
        feeInfo: FIXED_ELEMENTS_FEE_INFO,
      })],
      '{\"error\":{\"code\":2,\"type\":\"illegal_state\",\"message\":\"Failed to select coin. Not enough utxos.\"}}'
    );
  })(),
  (() => {
    const utxos = testUtxos([1, 2]);
    return TestHelper.createBitcoinTestCase(
      'SelectUtxos - Elements - Error - 3[1, 2]coins, req: 5.0 coins',
      SelectUtxos,
      [JSON.stringify({
        utxos,
        targetAmount: (5.0 * COIN_BASE),
        feeInfo: FIXED_ELEMENTS_FEE_INFO,
      })],
      '{\"error\":{\"code\":2,\"type\":\"illegal_state\",\"message\":\"Failed to select coin. Not enough utxos.\"}}'
    );
  })(),
  (() => {
    const utxos = testUtxos([1, 2]);
    return TestHelper.createBitcoinTestCase(
      'SelectUtxos - Elements - Error - empty fee info',
      SelectUtxos,
      [JSON.stringify({
        utxos,
        targetAmount: (1.0 * COIN_BASE),
      })],
      '{\"error\":{\"code\":1,\"type\":\"illegal_argument\",\"message\":\"transaction data invalid.\"}}'
    );
  })(),
  (() => {
    const utxos = testUtxos([1, 2]);
    return TestHelper.createBitcoinTestCase(
      'SelectUtxos - Elements - Error - invalid transaction',
      SelectUtxos,
      [JSON.stringify({
        utxos,
        targetAmount: (1.0 * COIN_BASE),
        feeInfo: {
          feeRate: 0,
          transaction: '02000000000000000000',
          isElements: true,
        },
      })],
      '{\"error\":{\"code\":1,\"type\":\"illegal_argument\",\"message\":\"transaction data invalid.\"}}'
    );
  })(),
];

TestHelper.doTest('SelectUtxos', testCase);
TestHelper.doTest('SelectUtxos ErrorCase', errorCase);

TestHelper.doTest('SelectUtxos - Elements', elementsTestCase);
TestHelper.doTest('SelectUtxos ErrorCase - Elements', elementsErrorCase);
