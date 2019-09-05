import { BlindRawTransaction, UnblindRawTransaction } from "../build/Release/cfd_js"
import TestHelper from "./TestHelper"

const emptyFunc = () => { };
const checkFunction = (jsonString, blindingKeyList) => {
  const parseResult = JSON.parse(jsonString);
  try {
    if (parseResult.hex) {
      const jsonData = {
        txHex: parseResult.hex,
        blindingKeys: blindingKeyList
      }
      const resultStr = UnblindRawTransaction(JSON.stringify(jsonData))
      const result = JSON.parse(resultStr)
      if (result.hex) {
        return result.hex;
      }
      return "unblind:" + result;
    }
    return "blind:" + jsonString;
  } catch (err) {
    console.log(err.name + ': ' + err.message);
  }
  return "";
};

const blindingKeys1 = ["66e4df5035a64acef16b4aa52ddc8bebd22b22c9eca150774e355abc72909d83","66e4df5035a64acef16b4aa52ddc8bebd22b22c9eca150774e355abc72909d83"]

const blindingKeys2 = ["5ec9ca23ed25805a07b47b88a920393e1e645868e59476b0c67d68f14b56289c","212b6bbfd431bbcf3b0d26edf43a45dae821de7b94148d3474a82667ceae012d","6b6c8d9cba0d34316b8d4bb99e325b4ede75cb28d1ec91404d13ddc0ecc10754"]

const convertUnblindTransaction1 = (json_string) => {
  return checkFunction(json_string, blindingKeys1);
};

const convertUnblindTransaction2 = (json_string) => {
  return checkFunction(json_string, blindingKeys2);
};

const testCase = [
  TestHelper.createElementsTestCase(
    "BlindRawTransaction txin is unblinded, TxOut x3",
    BlindRawTransaction,
    ["{\"txHex\":\"020000000001d3275960bf93bd7480f364068f01e47bf273b96acf05bdd05f8feccf1de25a390000000000ffffffff030125b251070e29ca19043cf33ccd7324e2ddab03ecc4ae0b5e77c4fc0e5cf6c95a010000000000046cd00017a914a3949e9a8b0b813db67c8fc5ad14194a297979cd870125b251070e29ca19043cf33ccd7324e2ddab03ecc4ae0b5e77c4fc0e5cf6c95a010000000000030d400017a914a3949e9a8b0b813db67c8fc5ad14194a297979cd870125b251070e29ca19043cf33ccd7324e2ddab03ecc4ae0b5e77c4fc0e5cf6c95a010000000000002710000000000000\",\"txins\":[{\"txid\":\"395ae21dcfec8f5fd0bd05cf6ab973f27be4018f0664f38074bd93bf605927d3\",\"vout\":0,\"asset\":\"5ac9f65c0efcc4775e0baec4ec03abdde22473cd3cf33c0419ca290e0751b225\",\"blindFactor\":\"0000000000000000000000000000000000000000000000000000000000000000\",\"assetBlindFactor\":\"0000000000000000000000000000000000000000000000000000000000000000\",\"amount\":500000}],\"blindPubkeys\":[\"0213c4451645063e1edd5fe76e5194864c2246d4c4e6c8df5a305224046e1ea2c4\",\"0213c4451645063e1edd5fe76e5194864c2246d4c4e6c8df5a305224046e1ea2c4\"]}"],
    "020000000001d3275960bf93bd7480f364068f01e47bf273b96acf05bdd05f8feccf1de25a390000000000ffffffff030125b251070e29ca19043cf33ccd7324e2ddab03ecc4ae0b5e77c4fc0e5cf6c95a010000000000046cd00017a914a3949e9a8b0b813db67c8fc5ad14194a297979cd870125b251070e29ca19043cf33ccd7324e2ddab03ecc4ae0b5e77c4fc0e5cf6c95a010000000000030d400017a914a3949e9a8b0b813db67c8fc5ad14194a297979cd870125b251070e29ca19043cf33ccd7324e2ddab03ecc4ae0b5e77c4fc0e5cf6c95a010000000000002710000000000000",
    emptyFunc, emptyFunc, convertUnblindTransaction1
  ),
  TestHelper.createElementsTestCase(
    "BlindRawTransaction txin is blinded, TxOut x3",
    BlindRawTransaction,
    ["{\"txHex\":\"020000000001b7fc3ad65a21649fdf9a225a6165a2f945e895f2eac6b2bbc1d2f3681080f8030000000000ffffffff030125b251070e29ca19043cf33ccd7324e2ddab03ecc4ae0b5e77c4fc0e5cf6c95a01000000000002bf200017a914a3949e9a8b0b813db67c8fc5ad14194a297979cd870125b251070e29ca19043cf33ccd7324e2ddab03ecc4ae0b5e77c4fc0e5cf6c95a0100000000000186a00017a914a3949e9a8b0b813db67c8fc5ad14194a297979cd870125b251070e29ca19043cf33ccd7324e2ddab03ecc4ae0b5e77c4fc0e5cf6c95a010000000000002710000000000000\",\"txins\":[{\"txid\":\"03f8801068f3d2c1bbb2c6eaf295e845f9a265615a229adf9f64215ad63afcb7\",\"vout\":0,\"asset\":\"5ac9f65c0efcc4775e0baec4ec03abdde22473cd3cf33c0419ca290e0751b225\",\"blindFactor\":\"f87734c279533d8beba96c5369e169e6caf5f307a34d72d4a0f9c9a7b8f8f269\",\"assetBlindFactor\":\"28093061ab2e407c6015f8cb33f337ffb118eaf3beb2d254de64203aa27ecbf7\",\"amount\":290000}],\"blindPubkeys\":[\"0213c4451645063e1edd5fe76e5194864c2246d4c4e6c8df5a305224046e1ea2c4\",\"0213c4451645063e1edd5fe76e5194864c2246d4c4e6c8df5a305224046e1ea2c4\"]}"],
    "020000000001b7fc3ad65a21649fdf9a225a6165a2f945e895f2eac6b2bbc1d2f3681080f8030000000000ffffffff030125b251070e29ca19043cf33ccd7324e2ddab03ecc4ae0b5e77c4fc0e5cf6c95a01000000000002bf200017a914a3949e9a8b0b813db67c8fc5ad14194a297979cd870125b251070e29ca19043cf33ccd7324e2ddab03ecc4ae0b5e77c4fc0e5cf6c95a0100000000000186a00017a914a3949e9a8b0b813db67c8fc5ad14194a297979cd870125b251070e29ca19043cf33ccd7324e2ddab03ecc4ae0b5e77c4fc0e5cf6c95a010000000000002710000000000000",
    emptyFunc, emptyFunc, convertUnblindTransaction1
  ),
]

const errorCase = [
  TestHelper.createElementsTestCase(
    "BlindRawTransaction invalid txHex",
    BlindRawTransaction,
    ["{\"txHex\":\"0000000000000000\",\"txins\":[{\"txid\":\"395ae21dcfec8f5fd0bd05cf6ab973f27be4018f0664f38074bd93bf605927d3\",\"vout\":0,\"asset\":\"5ac9f65c0efcc4775e0baec4ec03abdde22473cd3cf33c0419ca290e0751b225\",\"blindFactor\":\"0000000000000000000000000000000000000000000000000000000000000000\",\"assetBlindFactor\":\"0000000000000000000000000000000000000000000000000000000000000000\",\"amount\":500000}],\"blindPubkeys\":[\"0213c4451645063e1edd5fe76e5194864c2246d4c4e6c8df5a305224046e1ea2c4\",\"0213c4451645063e1edd5fe76e5194864c2246d4c4e6c8df5a305224046e1ea2c4\"]}"],
    "{\"error\":{\"code\":1,\"type\":\"illegal_argument\",\"message\":\"transaction data invalid.\"}}"
  ),
  TestHelper.createElementsTestCase(
    "BlindRawTransaction empty txHex",
    BlindRawTransaction,
    ["{\"txHex\":\"\",\"txins\":[{\"txid\":\"395ae21dcfec8f5fd0bd05cf6ab973f27be4018f0664f38074bd93bf605927d3\",\"vout\":0,\"asset\":\"5ac9f65c0efcc4775e0baec4ec03abdde22473cd3cf33c0419ca290e0751b225\",\"blindFactor\":\"0000000000000000000000000000000000000000000000000000000000000000\",\"assetBlindFactor\":\"0000000000000000000000000000000000000000000000000000000000000000\",\"amount\":500000}],\"blindPubkeys\":[\"0213c4451645063e1edd5fe76e5194864c2246d4c4e6c8df5a305224046e1ea2c4\",\"0213c4451645063e1edd5fe76e5194864c2246d4c4e6c8df5a305224046e1ea2c4\"]}"],
    "{\"error\":{\"code\":1,\"type\":\"illegal_argument\",\"message\":\"transaction data invalid.\"}}"
  ),
  TestHelper.createElementsTestCase(
    "BlindRawTransaction empty txins",
    BlindRawTransaction,
    ["{\"txHex\":\"020000000001d3275960bf93bd7480f364068f01e47bf273b96acf05bdd05f8feccf1de25a390000000000ffffffff030125b251070e29ca19043cf33ccd7324e2ddab03ecc4ae0b5e77c4fc0e5cf6c95a010000000000046cd00017a914a3949e9a8b0b813db67c8fc5ad14194a297979cd870125b251070e29ca19043cf33ccd7324e2ddab03ecc4ae0b5e77c4fc0e5cf6c95a010000000000030d400017a914a3949e9a8b0b813db67c8fc5ad14194a297979cd870125b251070e29ca19043cf33ccd7324e2ddab03ecc4ae0b5e77c4fc0e5cf6c95a010000000000002710000000000000\",\"txins\":[}"],
    "{\"error\":{\"code\":3,\"type\":\"out_of_range\",\"message\":\"JSON value error. Empty txins.\"}}"
  ),
  TestHelper.createElementsTestCase(
    "BlindRawTransaction empty blindPubkeys",
    BlindRawTransaction,
    ["{\"txHex\":\"020000000001d3275960bf93bd7480f364068f01e47bf273b96acf05bdd05f8feccf1de25a390000000000ffffffff030125b251070e29ca19043cf33ccd7324e2ddab03ecc4ae0b5e77c4fc0e5cf6c95a010000000000046cd00017a914a3949e9a8b0b813db67c8fc5ad14194a297979cd870125b251070e29ca19043cf33ccd7324e2ddab03ecc4ae0b5e77c4fc0e5cf6c95a010000000000030d400017a914a3949e9a8b0b813db67c8fc5ad14194a297979cd870125b251070e29ca19043cf33ccd7324e2ddab03ecc4ae0b5e77c4fc0e5cf6c95a010000000000002710000000000000\",\"txins\":[{\"txid\":\"395ae21dcfec8f5fd0bd05cf6ab973f27be4018f0664f38074bd93bf605927d3\",\"vout\":0,\"asset\":\"5ac9f65c0efcc4775e0baec4ec03abdde22473cd3cf33c0419ca290e0751b225\",\"blindFactor\":\"0000000000000000000000000000000000000000000000000000000000000000\",\"assetBlindFactor\":\"0000000000000000000000000000000000000000000000000000000000000000\",\"amount\":500000}],\"blindPubkeys\":[]}"],
    "{\"error\":{\"code\":3,\"type\":\"out_of_range\",\"message\":\"JSON value error. Pubkey count not enough.\"}}"
  ),
]

TestHelper.doTest("ElementsCreateRawTransaction", testCase);
TestHelper.doTest("ElementsCreateRawTransaction ErrorCase", errorCase);
