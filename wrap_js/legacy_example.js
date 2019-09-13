//
// legacy_example.js
// サンプルコード
//
import ExampleHelper, { SignParam, SignParamWithTweak } from "./tfc/example_helper"
import {
  CreateRawTransaction,
  CreateAddress,
  CreateSignatureHash,
  AddSign
} from "./build/Release/cfd_js"

// 初期値
const NET_TYPE = "regtest"  // mainnet or testnet or regtest
const HASH_TYPE = "p2sh"   // p2pkh or p2sh
const HWWALLET_PASSWORD = "1234"

// BitBoxの初期化
ExampleHelper.openBitBox(HWWALLET_PASSWORD)

const execute = async () => {
  // Conditions-----------------------------------------------------------------
  const pubkey = {
    alice: await ExampleHelper.getPubkey("m/44H/0H/0H/0/0"),
    bob: await ExampleHelper.getPubkey("m/44H/0H/0H/1/0")
  }

  const fee = 2000;

  // UTXOを確認後、書き換え必要！
  const inputUtxo = {
    p2pkh: {
      txid: "2f9be832f8e5fa57dc7ba11513a20d422191d2ae2dd037d326acfe7a58ef1026",
      vout: 1,
      amount: 100000000
    },
    p2sh: {
      txid: "03cd8b18946bdb10fc98904f58ada6a261486cbe41f95e8ab48847921eb81813",
      vout: 1,
      amount: 200000000
    }
  }

  // 例Script：<pubkey> + OP_CHECKSIG
  const redeemScript = "21" + pubkey.alice + "ac"

  // CreateAddress--------------------------------------------------------------
  console.log("\n===== CreateAddress Alice =====")
  const createAddressAliceParamJson = {
       pubkeyHex: pubkey.alice,
       scriptHex: redeemScript,
       network: NET_TYPE,
       hashType: HASH_TYPE
  }
  console.log("*** Request ***\n", createAddressAliceParamJson)
  let resStr = CreateAddress(JSON.stringify(createAddressAliceParamJson))
  const createAddressAliceResult = JSON.parse(resStr)
  console.log("\n*** Response ***\n", createAddressAliceResult, "\n")

  console.log("\n===== CreateAddress Bob =====")
  const createAddressBobParamJson = {
       pubkeyHex: pubkey.bob,
       network: NET_TYPE,
       hashType: "p2pkh"  // 送金先はP2PKH固定
  }
  console.log("*** Request ***\n", createAddressBobParamJson)
  resStr = CreateAddress(JSON.stringify(createAddressBobParamJson))
  const createAddressBobResult = JSON.parse(resStr)
  console.log("\n*** Response ***\n", createAddressBobResult, "\n")

  // CreateRawTransaction-------------------------------------------------------
  console.log("\n===== CreateRawTransaction Alice to Bob =====")
  const createRawTxParamJson = {
    version: 1,
    locktime: 0,
    txins: [
      {
        txid: inputUtxo[HASH_TYPE].txid,
        vout: inputUtxo[HASH_TYPE].vout
      }
    ],
    txouts: [
      {
        address: createAddressBobResult.address,
        amount: inputUtxo[HASH_TYPE].amount - fee
      }
    ]
  }
  console.log("*** Request ***\n", createRawTxParamJson)
  resStr = CreateRawTransaction(JSON.stringify(createRawTxParamJson))
  const createRawTxResult = JSON.parse(resStr)
  console.log("\n*** Response ***\n", createRawTxResult, "\n")

  // CreateSignatureHash--------------------------------------------------------
  console.log("\n===== CreateSignatureHash =====")
  const cshJson = {
    txHex: createRawTxResult.hex,
    txinTxid: inputUtxo[HASH_TYPE].txid,
    txinVout: inputUtxo[HASH_TYPE].vout,
    pubkeyHex: pubkey.alice,
    scriptHex: redeemScript,
    amount: inputUtxo[HASH_TYPE].amount - fee,
    hashType: HASH_TYPE
  }
  console.log("\n*** Request ***\n", cshJson)
  const cshStr = CreateSignatureHash(JSON.stringify(cshJson));
  const sighashResult = JSON.parse(cshStr)
  console.log("\n*** Response ***\n", sighashResult, "\n")

  // BitBox Sign----------------------------------------------------------------
  console.log("\n===== Sign Alice =====")
  const signParamJson = []
  signParamJson.push(new SignParam("m/44H/0H/0H/0/0", sighashResult.sighash))
  const signatures = await ExampleHelper.sign(signParamJson)

  // AddSign--------------------------------------------------------------------
  const inputSignData = {
    p2pkh: {
      name: "pubkey",
      data: pubkey.alice
    },
    p2sh: {
      name: "script",
      data: redeemScript
    }
  }

  const awsJson = {
    txHex: createRawTxResult.hex,
    txinTxid: inputUtxo[HASH_TYPE].txid,
    txinVout: inputUtxo[HASH_TYPE].vout,
    isWitness: false,
    signParam: [{
      hex: signatures[0],
      type: "sign",
      derEncode: true,
      sighashType: "all"
    },
    {
      hex: inputSignData[HASH_TYPE].data,
      type: inputSignData[HASH_TYPE].name
    }]
  }

  console.log("\n*** Request ***\n", awsJson)
  const awsStr = AddSign(JSON.stringify(awsJson))
  const signResult = JSON.parse(awsStr)
  console.log("\n*** Response ***\n", signResult, "\n")
}

execute();
