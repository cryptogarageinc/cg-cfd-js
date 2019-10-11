//
// example.js
// サンプルコード
//
import {
  CreateRawTransaction,
  DecodeRawTransaction,
  GetWitnessStackNum,
  AddSign,
  UpdateWitnessStack,
  AddMultisigSign,
  CreateAddress,
  CreateKeyPair,
  CreateMultisig,
  CreateSignatureHash,
  GetSupportedFunction,
  GetMnemonicWordlist,
} from "./build/Release/cfd_js"

import {
  CalculateEcSignature,
} from "./build/Release/cfdtest"

let supportFunctions
{
  console.log("===== Supported Function =====")
  const resStr = GetSupportedFunction()
  supportFunctions = JSON.parse(resStr)
  console.log("*** Response ***\n", supportFunctions, "\n")
}

const NET_TYPE = "testnet"

{
  const createKeyPairRequestJson = {
    "wif": true,
    "network": NET_TYPE,
    "isCompressed": true
  }
  console.log("*** Request ***\n", createKeyPairRequestJson);
  const resStr = CreateKeyPair(JSON.stringify(createKeyPairRequestJson))
  const result = JSON.parse(resStr)
  console.log("\n*** Response ***\n", result, "\n")
}

const CONTRACT_CONDS = {
  fundAmt: 5000000000,    // fix fund amount (unit:satoshi), which is unconcerned fee
  feeAmt: 8000,           // fix fee amount (unit:satoshi) each transaction
  payAddrAlice: "tb1qmtjru45n7v8rklpan2vfzms7gex23d780lxkl2",       // payment address for alice (your party)
  payAddrBob: "tb1qj52arfpmwxyjwddvjhjy45nkl725h583es0mef",         // payment address for bob (couter party)
  chgAddrAlice: "tb1q6vugzhd50r3yxgejxym0yzylkpkh2qqcvjuqp4",       // change address for alice (your party)
  chgAddrBob: "tb1qy7c7fqkgags3g6j0r8naj6c8fydcaz766d0skr",         // change address for bob (couter party)
}
console.log("\n===== CONTRACT_CONDS =====\n", CONTRACT_CONDS, "\n")

// CreateMultisig
let createMultisigResult
{
  console.log("\n===== CreateMultisig =====")
  const createMultisigParamJson = {
    "nrequired": 2,
    "keys": [
      "0205ffcdde75f262d66ada3dd877c7471f8f8ee9ee24d917c3e18d01cee458bafe",
      "02be61f4350b4ae7544f99649a917f48ba16cf48c983ac1599774958d88ad17ec5"
    ],
    "network": NET_TYPE,
    "hashType": "p2wsh"
  }
  console.log("*** Request ***\n", createMultisigParamJson)
  const resStr = CreateMultisig(JSON.stringify(createMultisigParamJson))
  createMultisigResult = JSON.parse(resStr)
  console.log("\n*** Response ***\n", createMultisigResult, "\n")
}

// CreateRawTransaction
let createRawTxResult
{
  console.log("\n===== CreateRawTransaction =====")
  const fundTxAmt = CONTRACT_CONDS.fundAmt + (CONTRACT_CONDS.feeAmt * 2)
  const txInAmtAlice = 3000000000   // dummy txin amount
  const txInAmtBob = 2800000000     // dummy txin amount
  const createRawTxParamJson = {
    "version": 2,
    "locktime": 0,
    "txins": [
      {
        "txid": "86dc9d4a8764c8658f24ab0286f215abe443f98221c272e1999c56e902c9a6ac",   // dummy txid
        "vout": 0
      },
      {
        "txid": "d99c1749f81555ac372e3884251c9c758004516b05e5108db38f48bc626aa933",   // dummy txid
        "vout": 1
      }
    ],
    "txouts": [
      {
        "address": createMultisigResult.address,
        "amount": fundTxAmt
      },
      {
        "address": CONTRACT_CONDS.chgAddrAlice,
        "amount": txInAmtAlice - fundTxAmt / 2
      },
      {
        "address": CONTRACT_CONDS.chgAddrBob,
        "amount": txInAmtBob - fundTxAmt / 2
      }
    ]
  }
  console.log("*** Request ***\n", createRawTxParamJson)
  const resStr = CreateRawTransaction(JSON.stringify(createRawTxParamJson))
  createRawTxResult = JSON.parse(resStr)
  console.log("\n*** Response ***\n", createRawTxResult, "\n")
}
let decodeRawTxResult
{
  console.log("-- decoderawtransaction start --")
  const decodeTxJson = {
    hex: createRawTxResult.hex,
    network: NET_TYPE
  }
  const resStr = DecodeRawTransaction(JSON.stringify(decodeTxJson))
  decodeRawTxResult = JSON.parse(resStr)
  console.log("*** Response ***\n", JSON.stringify(decodeRawTxResult, null, '  '))
  console.log("-- decoderawtransaction end   --\n")
}
// CreateSignatureHash
let createSignatureHash
{
  console.log("\n===== CreateSignatureHash =====")
  // build json parameter
  const reqJson = {
    tx: createRawTxResult.hex,       // TxHex
    txin: {
      txid: "86dc9d4a8764c8658f24ab0286f215abe443f98221c272e1999c56e902c9a6ac", // dummy txid
      vout: 0,                       // TxInのvout
      keyData: {
        hex: createMultisigResult.witnessScript, // FundTxのRedeemScript
        type: "redeem_script"
      },
      amount: 5000016000,                 // FundTx txout[vout].amount
      hashType: "p2wsh",
      sighashType: "all"
    }
  }
  console.log("\n*** Request ***\n", reqJson)
  const resStr = CreateSignatureHash(JSON.stringify(reqJson));
  const createSignatureHash = JSON.parse(resStr)
  console.log("\n*** Response ***\n", createSignatureHash, "\n")
}
let getWitnessStackNum1
{
  console.log("\n===== GetWitnessStackNum =====")

  // build json parameter
  const getWitnessJson = {
    tx: createRawTxResult.hex,     // hex
    txin: {
      txid: "86dc9d4a8764c8658f24ab0286f215abe443f98221c272e1999c56e902c9a6ac", // dummy txid
      vout: 0                        // TxInのvout
    }
  }
  console.log("\n*** Request ***\n", getWitnessJson)
  const resStr = GetWitnessStackNum(JSON.stringify(getWitnessJson));
  getWitnessStackNum1 = JSON.parse(resStr)
  console.log("\n*** Response ***\n", getWitnessStackNum1, "\n")
}
let addWitnessStack
{
  console.log("\n===== AddSign =====")

  // build json parameter
  const getWitnessJson = {
    tx: createRawTxResult.hex,       // tx hex
    txin: {
      txid: "86dc9d4a8764c8658f24ab0286f215abe443f98221c272e1999c56e902c9a6ac", // dummy txid
      vout: 0,                       // TxInのvout
      signParam: [
        {
          hex: "11111111",
          type: "binary"
        },
        {
          hex: "22222222",
          type: "binary"
        },
        {
          hex: createMultisigResult.witnessScript,
          type: "redeem_script"
        }
      ]
    }
  }
  console.log("\n*** Request ***\n", getWitnessJson)
  const resStr = AddSign(JSON.stringify(getWitnessJson));
  addWitnessStack = JSON.parse(resStr)
  console.log("\n*** Response ***\n", addWitnessStack, "\n")
}
let updateWitnessStack
{
  console.log("\n===== UpdateWitnessStack =====")

  // build json parameter
  const getWitnessJson = {
    tx: addWitnessStack.hex,
    txin: {
      txid: "86dc9d4a8764c8658f24ab0286f215abe443f98221c272e1999c56e902c9a6ac", // dummy txid
      vout: 0,                       // TxInのvout（FundTxのTxoutのvout）
      witnessStack: {
        index: 1,
        hex: "33333333",
        type: "binary"
      }
    }
  }
  console.log("\n*** Request ***\n", getWitnessJson)
  const resStr = UpdateWitnessStack(JSON.stringify(getWitnessJson));
  updateWitnessStack = JSON.parse(resStr)
  console.log("\n*** Response ***\n", updateWitnessStack, "\n")
}
let getWitnessStackNum2
{
  console.log("\n===== GetWitnessStackNum2 =====")

  // build json parameter
  const getWitnessJson = {
    tx: updateWitnessStack.hex,
    txin: {
      txid: "86dc9d4a8764c8658f24ab0286f215abe443f98221c272e1999c56e902c9a6ac", // dummy txid
      vout: 0                        // TxInのvout（FundTxのTxoutのvout）
    }
  }
  console.log("\n*** Request ***\n", getWitnessJson)
  const resStr = GetWitnessStackNum(JSON.stringify(getWitnessJson));
  getWitnessStackNum2 = JSON.parse(resStr)
  console.log("\n*** Response ***\n", getWitnessStackNum2, "\n")
}

// Create P2SH-P2WPKH transaction
let createP2shP2wpkhAddressResult
{
  console.log("\n===== CreateP2shP2wpkhAddress =====")
  const createAddressParamJson = {
    "keyData": {
      "hex": "0279be667ef9dcbbac55a06295ce870b07029bfcdb2dce28d959f2815b16f81798",
      "type": "pubkey"
    },
    "network": NET_TYPE,
    "hashType": "p2sh-p2wpkh"
  }
  console.log("*** Request ***\n", createAddressParamJson)
  const resStr = CreateAddress(JSON.stringify(createAddressParamJson))
  createP2shP2wpkhAddressResult = JSON.parse(resStr)
  console.log("\n*** Response ***\n", createP2shP2wpkhAddressResult, "\n")
}
let createP2shP2wpkhTxResult
{
  console.log("\n===== CreateP2shP2wpkhTx =====")
  const txInAmtAlice = 3000000000   // dummy txin amount
  const createRawTxParamJson = {
    "version": 1,
    "locktime": 0,
    "txins": [
      {
        "txid": "86dc9d4a8764c8658f24ab0286f215abe443f98221c272e1999c56e902c9a6ac",   // dummy txid
        "vout": 0
      }
    ],
    "txouts": [
      {
        "address": createP2shP2wpkhAddressResult.address,
        "amount": txInAmtAlice
      }
    ]
  }
  console.log("*** Request ***\n", createRawTxParamJson)
  const resStr = CreateRawTransaction(JSON.stringify(createRawTxParamJson))
  createP2shP2wpkhTxResult = JSON.parse(resStr)
  console.log("\n*** Response ***\n", createP2shP2wpkhTxResult, "\n")
}
let CreateP2shP2wpkhSignatureHashResult
{
  console.log("\n===== CreateP2shP2wpkhSignatureHash =====")
  const txInAmtAlice = 3000000000   // dummy txin amount
  const signatureHashParamJson = {
    tx: createP2shP2wpkhTxResult.hex,
    txin: {
      txid: "86dc9d4a8764c8658f24ab0286f215abe443f98221c272e1999c56e902c9a6ac",
      vout: 0,
      "keyData": {
        "hex": "0279be667ef9dcbbac55a06295ce870b07029bfcdb2dce28d959f2815b16f81798",
        "type": "pubkey"
      },
      amount: txInAmtAlice + 2000,
      hashType: 'p2wpkh'
    }
  }
  console.log("*** Request ***\n", signatureHashParamJson)
  const resStr = CreateSignatureHash(JSON.stringify(signatureHashParamJson))
  CreateP2shP2wpkhSignatureHashResult = JSON.parse(resStr)
  console.log("\n*** Response ***\n", CreateP2shP2wpkhSignatureHashResult, "\n")
}

let addP2shP2wpkhTxWitness
{
  console.log("\n===== AddSign =====")
  const signature = '47ac8e878352d3ebbde1c94ce3a10d057c24175747116f8288e5d794d12d482f217f36a485cae903c713331d877c1f64677e3622ad4010726870540656fe9dcb'  // dummy
  // const privkey = 'cU4KjNUT7GjHm7CkjRjG46SzLrXHXoH3ekXmqa2jTCFPMkQ64sw1';
  // const signature = CalculateEcSignature(CreateP2shP2wpkhSignatureHashResult.sighash, privkey, NET_TYPE);
  const getWitnessJson = {
    tx: createP2shP2wpkhTxResult.hex,
    txin: {
      txid: "86dc9d4a8764c8658f24ab0286f215abe443f98221c272e1999c56e902c9a6ac",   // dummy txid
      vout: 0,
      signParam: [
        {
          hex: signature,
          type: "sign",
          derEncode: true
        },
        {
          hex: '0279be667ef9dcbbac55a06295ce870b07029bfcdb2dce28d959f2815b16f81798',
          type: "pubkey"
        }
      ]
    }
  }
  console.log("\n*** Request ***\n", getWitnessJson)
  const resStr = AddSign(JSON.stringify(getWitnessJson));
  addP2shP2wpkhTxWitness = JSON.parse(resStr)
  console.log("\n*** Response ***\n", addP2shP2wpkhTxWitness, "\n")
}
let addP2shP2wpkhTxStack
{
  console.log("\n===== AddSign =====")
  const getWitnessJson = {
    tx: addP2shP2wpkhTxWitness.hex,
    txin: {
      txid: "86dc9d4a8764c8658f24ab0286f215abe443f98221c272e1999c56e902c9a6ac",   // dummy txid
      vout: 0,
      isWitness: false,   // P2SH用のscriptSig追加のため
      signParam: [
        {
          hex: createP2shP2wpkhAddressResult.redeemScript,
          type: "redeem_script"
        }
      ]
    }
  }
  console.log("\n*** Request ***\n", getWitnessJson)
  const resStr = AddSign(JSON.stringify(getWitnessJson));
  addP2shP2wpkhTxStack = JSON.parse(resStr)
  console.log("\n*** Response ***\n", addP2shP2wpkhTxStack, "\n")
}
let decodeP2shP2wpkhTxResult
{
  console.log("-- decoderawtransaction start --")
  const decodeTxJson = {
    hex: addP2shP2wpkhTxStack.hex,
    network: NET_TYPE
  }
  const resStr = DecodeRawTransaction(JSON.stringify(decodeTxJson))
  decodeP2shP2wpkhTxResult = JSON.parse(resStr)
  console.log("*** Response ***\n", JSON.stringify(decodeP2shP2wpkhTxResult, null, '  '))
  console.log("-- decoderawtransaction end   --\n")
}

// Create P2SH-P2WSH(multisig) transaction
const multisigKeyPair = []
let createP2shMultisigAddressResult
{
  for (let i = 0; i < 2; ++i) {
    multisigKeyPair.push(JSON.parse(CreateKeyPair(JSON.stringify({
      "wif": true,
      "network": NET_TYPE,
      "isCompressed": true
    }))))
  }

  console.log("\n===== CreateMultisigAddress(for P2SH-P2WSH) =====")
  const createMultisigParamJson = {
    "nrequired": 2,
    "keys": [
      "0205ffcdde75f262d66ada3dd877c7471f8f8ee9ee24d917c3e18d01cee458bafe",
      "02be61f4350b4ae7544f99649a917f48ba16cf48c983ac1599774958d88ad17ec5"
    ],
    "network": NET_TYPE,
    "hashType": "p2sh-p2wsh"
  }
  console.log("*** Request ***\n", createMultisigParamJson)
  const resStr = CreateMultisig(JSON.stringify(createMultisigParamJson))
  createP2shMultisigAddressResult = JSON.parse(resStr)
  console.log("\n*** Response ***\n", createP2shMultisigAddressResult, "\n")
}
// ここで保存しないと後続で上手く動かず
let multisigWitnessScript = createP2shMultisigAddressResult.witnessScript
let createP2shSegWitMultisigTxResult
{
  console.log("\n===== CreateP2shP2wsh(multisig)Tx =====")
  const txInAmtAlice = 3000000000   // dummy txin amount
  const createRawTxParamJson = {
    "version": 1,
    "locktime": 0,
    "txins": [
      {
        "txid": "86dc9d4a8764c8658f24ab0286f215abe443f98221c272e1999c56e902c9a6ac",   // dummy txid
        "vout": 0
      }
    ],
    "txouts": [
      {
        "address": createP2shMultisigAddressResult.address,
        "amount": txInAmtAlice
      }
    ]
  }
  console.log("*** Request ***\n", createRawTxParamJson)
  const resStr = CreateRawTransaction(JSON.stringify(createRawTxParamJson))
  createP2shSegWitMultisigTxResult = JSON.parse(resStr)
  console.log("\n*** Response ***\n", createP2shSegWitMultisigTxResult, "\n")
}
let addP2shSegWitMultisigTxStack
{
  console.log("\n===== AddMultisigSign =====")
  const addMultisigSign = {
    tx: createP2shSegWitMultisigTxResult.hex,
    txin: {
      txid: "86dc9d4a8764c8658f24ab0286f215abe443f98221c272e1999c56e902c9a6ac",
      vout: 0,
      isWitness: false,   // P2SH用のscriptSig追加のため
      signParams: [
        {
          hex: "00000000000000000000000000000000", // dummy signature
          type: "sign",
          derEncode: false,
        },
        {
          hex: "11111111111111111111111111111111",  // dummy signature
          type: "sign",
          derEncode: false,
        }
      ],
      redeemScript: createP2shMultisigAddressResult.redeemScript,
      witnessScript: createP2shMultisigAddressResult.witnessScript,
      hashType: "p2sh-p2wsh"
    }
  }
  console.log("\n*** Request ***\n", addMultisigSign)
  const resStr = AddMultisigSign(JSON.stringify(addMultisigSign));
  addP2shSegWitMultisigTxStack = JSON.parse(resStr)
  console.log("\n*** Response ***\n", addP2shSegWitMultisigTxStack, "\n")
}
let decodeP2shSegWitMultisigTxResult
{
  console.log("-- decoderawtransaction start --")
  const decodeTxJson = {
    hex: addP2shSegWitMultisigTxStack.hex,
    network: NET_TYPE
  }
  const resStr = DecodeRawTransaction(JSON.stringify(decodeTxJson))
  decodeP2shSegWitMultisigTxResult = JSON.parse(resStr)
  console.log("*** Response ***\n", JSON.stringify(decodeP2shSegWitMultisigTxResult, null, '  '))
  console.log("-- decoderawtransaction end   --\n")
}

// Create P2SH-P2WSH transaction
let createP2wshAddressResult
{
  console.log("\n===== CreateP2wshAddress =====")
  const createAddressParamJson = {
    "keyData": {
      "hex": multisigWitnessScript,
      "type": "redeem_script"
    },
    "network": NET_TYPE,
    "hashType": "p2wsh"
  }
  console.log("*** Request ***\n", createAddressParamJson)
  const resStr = CreateAddress(JSON.stringify(createAddressParamJson))
  createP2wshAddressResult = JSON.parse(resStr)
  console.log("\n*** Response ***\n", createP2wshAddressResult, "\n")
}
let createP2shP2wshAddressResult
{
  console.log("\n===== CreateP2shP2wshAddress =====")
  const createAddressParamJson = {
    "keyData": {
      "hex": createP2wshAddressResult.lockingScript,
      "type": "redeem_script"
    },
    "network": NET_TYPE,
    "hashType": "p2sh"
  }
  console.log("*** Request ***\n", createAddressParamJson)
  const resStr = CreateAddress(JSON.stringify(createAddressParamJson))
  createP2shP2wshAddressResult = JSON.parse(resStr)
  console.log("\n*** Response ***\n", createP2shP2wshAddressResult, "\n")
}
let createP2shP2wshTxResult
{
  console.log("\n===== CreateP2shP2wshTx =====")
  const txInAmtAlice = 3000000000   // dummy txin amount
  const createRawTxParamJson = {
    "version": 1,
    "locktime": 0,
    "txins": [
      {
        "txid": "86dc9d4a8764c8658f24ab0286f215abe443f98221c272e1999c56e902c9a6ac",   // dummy txid
        "vout": 0
      }
    ],
    "txouts": [
      {
        "address": createP2shP2wshAddressResult.address,
        "amount": txInAmtAlice
      }
    ]
  }
  console.log("*** Request ***\n", createRawTxParamJson)
  const resStr = CreateRawTransaction(JSON.stringify(createRawTxParamJson))
  createP2shP2wshTxResult = JSON.parse(resStr)
  console.log("\n*** Response ***\n", createP2shP2wshTxResult, "\n")
}
let addP2shP2wshTxStack
{
  console.log("\n===== AddSign =====")
  const getWitnessJson = {
    tx: createP2shP2wshTxResult.hex,
    txin: {
      txid: "86dc9d4a8764c8658f24ab0286f215abe443f98221c272e1999c56e902c9a6ac",   // dummy txid
      vout: 0,
      isWitness: false,   // P2SH用のscriptSig追加のため
      signParam: [
        {
          hex: createP2wshAddressResult.lockingScript,
          type: "redeem_script"
        }
      ]
    }
  }
  console.log("\n*** Request ***\n", getWitnessJson)
  const resStr = AddSign(JSON.stringify(getWitnessJson));
  addP2shP2wshTxStack = JSON.parse(resStr)
  console.log("\n*** Response ***\n", addP2shP2wshTxStack, "\n")
}
let decodeP2shP2wshTxResult
{
  console.log("-- decoderawtransaction start --")
  const decodeTxJson = {
    hex: addP2shP2wshTxStack.hex,
    network: NET_TYPE
  }
  const resStr = DecodeRawTransaction(JSON.stringify(decodeTxJson))
  decodeP2shP2wshTxResult = JSON.parse(resStr)
  console.log("*** Response ***\n", JSON.stringify(decodeP2shP2wshTxResult, null, '  '))
  console.log("-- decoderawtransaction end   --\n")
}

// Create P2WPKH transaction sign
// https://github.com/bitcoin/bips/blob/master/bip-0143.mediawiki#native-p2wpkh
let decodeP2WPKHTxResult
{
  console.log("-- decoderawtransaction start --")
  const decodeTxJson = {
    hex: '0100000002fff7f7881a8099afa6940d42d1e7f6362bec38171ea3edf433541db4e4ad969f0000000000eeffffffef51e1b804cc89d182d279655c3aa89e815b1b309fe287d9b2b55d57b90ec68a0100000000ffffffff02202cb206000000001976a9148280b37df378db99f66f85c95a783a76ac7a6d5988ac9093510d000000001976a9143bde42dbee7e4dbe6a21b2d50ce2f0167faa815988ac11000000',
    network: 'mainnet'
  }
  const resStr = DecodeRawTransaction(JSON.stringify(decodeTxJson))
  decodeP2WPKHTxResult = JSON.parse(resStr)
  console.log("*** Response ***\n", JSON.stringify(decodeP2WPKHTxResult, null, '  '))
  console.log("-- decoderawtransaction end   --\n")
}

// 9f96ade4b41d5433f4eda31e1738ec2b36f6e7d1420d94a6af99801a88f7f7ff
let addP2WPKHTxSign1
{
  console.log("\n===== AddSign1(P2WPKH) =====")
  const getWitnessJson = {
    tx: '0100000002fff7f7881a8099afa6940d42d1e7f6362bec38171ea3edf433541db4e4ad969f0000000000eeffffffef51e1b804cc89d182d279655c3aa89e815b1b309fe287d9b2b55d57b90ec68a0100000000ffffffff02202cb206000000001976a9148280b37df378db99f66f85c95a783a76ac7a6d5988ac9093510d000000001976a9143bde42dbee7e4dbe6a21b2d50ce2f0167faa815988ac11000000',
    txin: {
      txid: "9f96ade4b41d5433f4eda31e1738ec2b36f6e7d1420d94a6af99801a88f7f7ff",   // dummy txid
      vout: 0,
      isWitness: false,
      signParam: [
        {
          hex: '0020f39f6272ba6b57918eb047c5dc44fb475356b0f24c12fca39b19284e80008a42',
          type: "redeem_script"
        }
      ]
    }
  }
  console.log("\n*** Request ***\n", getWitnessJson)
  const resStr = AddSign(JSON.stringify(getWitnessJson));
  addP2WPKHTxSign1 = JSON.parse(resStr)
  console.log("\n*** Response ***\n", addP2WPKHTxSign1, "\n")
}


// 8ac60eb9575db5b2d987e29f301b5b819ea83a5c6579d282d189cc04b8e151ef
let getP2WPKHTxSigHash2
{
  console.log("\n===== AddSign2(P2WPKH) =====")
  const getWitnessJson = {
    tx: addP2WPKHTxSign1.hex,
    txin: {
      txid: "8ac60eb9575db5b2d987e29f301b5b819ea83a5c6579d282d189cc04b8e151ef",   // dummy txid
      vout: 1,
      "keyData": {
        "hex": "025476c2e83188368da1ff3e292e7acafcdb3566bb0ad253f62fc70f07aeee6357",
        "type": "pubkey"
      },
      amount: 600000000,
      hashType: 'p2wpkh'
    }
  }
  console.log("\n*** Request ***\n", getWitnessJson)
  const resStr = CreateSignatureHash(JSON.stringify(getWitnessJson));
  getP2WPKHTxSigHash2 = JSON.parse(resStr)
  console.log("\n*** Response ***\n", getP2WPKHTxSigHash2, "\n")
}

let getP2WPKHTxSign2
{
  console.log("\n===== AddSign2(P2WPKH) =====")
  const privkey = '619c335025c7f4012e556c2a58b2506e30b8511b53ade95ea316fd8c3286feb9';
  const resStr = CalculateEcSignature(getP2WPKHTxSigHash2.sighash, privkey, 'hex_data');
  getP2WPKHTxSign2 = {
    sign: resStr
  }
  console.log("\n*** Response ***\n", getP2WPKHTxSign2, "\n")
}
let addP2WPKHTxSign2
{
  console.log("\n===== AddSign2(P2WPKH) =====")
  const getWitnessJson = {
    tx: addP2WPKHTxSign1.hex,
    txin: {
      txid: "8ac60eb9575db5b2d987e29f301b5b819ea83a5c6579d282d189cc04b8e151ef",   // dummy txid
      vout: 1,
      signParam: [
        {
          hex: getP2WPKHTxSign2.sign,
          type: "sign",
          derEncode: true
        },
        {
          hex: '025476c2e83188368da1ff3e292e7acafcdb3566bb0ad253f62fc70f07aeee6357',
          type: "pubkey"
        }
      ]
    }
  }
  console.log("\n*** Request ***\n", getWitnessJson)
  const resStr = AddSign(JSON.stringify(getWitnessJson));
  addP2WPKHTxSign2 = JSON.parse(resStr)
  console.log("\n*** Response ***\n", addP2WPKHTxSign2, "\n")
}

let decodeP2WPKHSignedTxResult
{
  console.log("-- decoderawtransaction start --")
  const decodeTxJson = {
    hex: addP2WPKHTxSign2.hex,
    network: 'mainnet'
  }
  const resStr = DecodeRawTransaction(JSON.stringify(decodeTxJson))
  decodeP2WPKHSignedTxResult = JSON.parse(resStr)
  console.log("*** Response ***\n", JSON.stringify(decodeP2WPKHSignedTxResult, null, '  '))
  console.log("-- decoderawtransaction end   --\n")
}

let wordlistResult
{
  console.log("-- GetMnemonicWordlist start --")
  const reqJson = {
    language: "en"
  }
  const resStr = GetMnemonicWordlist(JSON.stringify(reqJson))
  wordlistResult = JSON.parse(resStr)
  console.log("*** Response ***\n", wordlistResult)
}
