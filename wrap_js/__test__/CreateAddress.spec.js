import { CreateAddress } from "../build/Release/cfd_js"
import TestHelper from "./TestHelper"

// テストベクター参考（https://en.bitcoin.it/wiki/Technical_background_of_version_1_Bitcoin_addresses）
// テストベクター参考（https://qiita.com/osada/items/fe970427474f4326e9ae）
// テストベクター参考（https://bc-2.jp/tools/bech32demo/index.html）
const testCase = [
  TestHelper.createBitcoinTestCase(
    "CreateAddress HashType(P2PKH) mainnet",
    CreateAddress,
    ["{\"scriptHex\":\"\", \"pubkeyHex\":\"0250863ad64a87ae8a2fe83c1af1a8403cb53f53e486d8511dad8a04887e5b2352\", \"network\":\"mainnet\", \"hashType\":\"p2pkh\"}"],
    "{\"address\":\"1PMycacnJaSqwwJqjawXBErnLsZ7RkXUAs\",\"lockingScript\":\"76a914f54a5851e9372b87810a8e60cdd2e7cfd80b6e3188ac\"}"
  ),
  TestHelper.createBitcoinTestCase(
    "CreateAddress HashType(P2PKH) testnet",
    CreateAddress,
    ["{\"scriptHex\":\"\", \"pubkeyHex\":\"030527ca322fbc0db2bb92560af7a3364599c0cfa4c2f8be5add2cf8a9f7053e14\", \"network\":\"testnet\", \"hashType\":\"p2pkh\"}"],
    "{\"address\":\"mjawtDFWiNppWUqczgQevgyg6Hg7J8Uxcg\",\"lockingScript\":\"76a9142ca1d2e7214b16725cf6310867460633a061edcb88ac\"}"
  ),
  TestHelper.createBitcoinTestCase(
    "CreateAddress HashType(P2SH) mainnet",
    CreateAddress,
    ["{\"scriptHex\":\"76a9147f6ab65fa911f558ca2dde3e9d073acb02c0d5c688ac\", \"pubkeyHex\":\"\", \"network\":\"mainnet\", \"hashType\":\"p2sh\"}"],
    "{\"address\":\"3KxE77EHe1ip6WGRifwr9fZ5WBDGsLyWFz\",\"lockingScript\":\"a914c852ac34a1c76b63a279c97502c9ccc4e3cb9e8b87\"}"
  ),
  TestHelper.createBitcoinTestCase(
    "CreateAddress HashType(P2SH) testnet",
    CreateAddress,
    ["{\"scriptHex\":\"016eb1752103b05c78e5dbde5046d0545fa788bac2303929259aa77f5eedf1d87bddbca1bb3cac\", \"pubkeyHex\":\"\", \"network\":\"testnet\", \"hashType\":\"p2sh\"}"],
    "{\"address\":\"2NEbifo1SsiCYMQhGxGCg3tcTzR8xHuhqeH\",\"lockingScript\":\"a914ea3ae70e53e6e2813002738cba26bd0cfcdecb0687\"}"
  ),
  TestHelper.createBitcoinTestCase(
    "CreateAddress HashType(P2WPKH) mainnet",
    CreateAddress,
    ["{\"scriptHex\":\"\", \"pubkeyHex\":\"0279BE667EF9DCBBAC55A06295CE870B07029BFCDB2DCE28D959F2815B16F81798\", \"network\":\"mainnet\", \"hashType\":\"p2wpkh\"}"],
    "{\"address\":\"bc1qw508d6qejxtdg4y5r3zarvary0c5xw7kv8f3t4\",\"lockingScript\":\"0014751e76e8199196d454941c45d1b3a323f1433bd6\"}"
  ),
  TestHelper.createBitcoinTestCase(
    "CreateAddress HashType(P2WPKH) testnet",
    CreateAddress,
    ["{\"scriptHex\":\"\", \"pubkeyHex\":\"0279BE667EF9DCBBAC55A06295CE870B07029BFCDB2DCE28D959F2815B16F81798\", \"network\":\"testnet\", \"hashType\":\"p2wpkh\"}"],
    "{\"address\":\"tb1qw508d6qejxtdg4y5r3zarvary0c5xw7kxpjzsx\",\"lockingScript\":\"0014751e76e8199196d454941c45d1b3a323f1433bd6\"}"
  ),
  TestHelper.createBitcoinTestCase(
    "CreateAddress HashType(P2WSH) mainnet",
    CreateAddress,
    ["{\"scriptHex\":\"210279be667ef9dcbbac55a06295ce870b07029bfcdb2dce28d959f2815b16f81798ac\", \"pubkeyHex\":\"\", \"network\":\"mainnet\", \"hashType\":\"p2wsh\"}"],
    "{\"address\":\"bc1qrp33g0q5c5txsp9arysrx4k6zdkfs4nce4xj0gdcccefvpysxf3qccfmv3\",\"lockingScript\":\"00201863143c14c5166804bd19203356da136c985678cd4d27a1b8c6329604903262\"}"
  ),
  TestHelper.createBitcoinTestCase(
    "CreateAddress HashType(P2WSH) testnet",
    CreateAddress,
    ["{\"scriptHex\":\"210279be667ef9dcbbac55a06295ce870b07029bfcdb2dce28d959f2815b16f81798ac\", \"pubkeyHex\":\"\", \"network\":\"testnet\", \"hashType\":\"p2wsh\"}"],
    "{\"address\":\"tb1qrp33g0q5c5txsp9arysrx4k6zdkfs4nce4xj0gdcccefvpysxf3q0sl5k7\",\"lockingScript\":\"00201863143c14c5166804bd19203356da136c985678cd4d27a1b8c6329604903262\"}"
  )
]

const errorCase = [
  TestHelper.createBitcoinTestCase(
    "CreateAddress Error(network is invalid)",
    CreateAddress,
    ["{\"scriptHex\":\"\", \"pubkeyHex\":\"025476c2e83188368da1ff3e292e7acafcdb3566bb0ad253f62fc70f07aeee6357\", \"network\":\"mainnetttt\", \"hashType\":\"p2wpkh\"}"],
    "{\"error\":{\"code\":1,\"type\":\"illegal_argument\",\"message\":\"Invalid network_type passed. network_type must be \\\"mainnet\\\" or \\\"testnet\\\" or \\\"regtest\\\".\"}}"
  ),
  TestHelper.createBitcoinTestCase(
    "CreateAddress Error(hashtype is invalid)",
    CreateAddress,
    ["{\"scriptHex\":\"\", \"pubkeyHex\":\"025476c2e83188368da1ff3e292e7acafcdb3566bb0ad253f62fc70f07aeee6357\", \"network\":\"mainnet\", \"hashType\":\"p2pk\"}"],
    "{\"error\":{\"code\":1,\"type\":\"illegal_argument\",\"message\":\"Invalid hash_type. hash_type must be \\\"p2pkh\\\" or \\\"p2sh\\\" or \\\"p2wpkh\\\" or \\\"p2wsh\\\".\"}}"
  ),
  TestHelper.createBitcoinTestCase(
    "CreateAddress Error(scriptHex is invalid)",
    CreateAddress,
    ["{\"scriptHex\":\"xxxx\", \"pubkeyHex\":\"\", \"network\":\"mainnet\", \"hashType\":\"p2sh\"}"],
    "{\"error\":{\"code\":1,\"type\":\"illegal_argument\",\"message\":\"hex to byte convert error.\"}}"
  ),
  TestHelper.createBitcoinTestCase(
    "CreateAddress Error(pubkeyHex is invalid)",
    CreateAddress,
    ["{\"scriptHex\":\"\", \"pubkeyHex\":\"xxxx\", \"network\":\"mainnet\", \"hashType\":\"p2pkh\"}"],
    "{\"error\":{\"code\":1,\"type\":\"illegal_argument\",\"message\":\"hex to byte convert error.\"}}"
  ),
  TestHelper.createBitcoinTestCase(
    "CreateAddress Error(scriptHex is none)",
    CreateAddress,
    ["{\"scriptHex\":\"\", \"pubkeyHex\":\"\", \"network\":\"mainnet\", \"hashType\":\"p2sh\"}"],
    "{\"error\":{\"code\":1,\"type\":\"illegal_argument\",\"message\":\"script_hex is empty.\"}}"
  ),
  TestHelper.createBitcoinTestCase(
    "CreateAddress Error(pubkeyHex is none)",
    CreateAddress,
    ["{\"scriptHex\":\"\", \"pubkeyHex\":\"\", \"network\":\"mainnet\", \"hashType\":\"p2pkh\"}"],
    "{\"error\":{\"code\":1,\"type\":\"illegal_argument\",\"message\":\"pubkey_hex is empty.\"}}"
  ),
  TestHelper.createBitcoinTestCase(
    "CreateAddress Error(pubkeyHex is longer)",
    CreateAddress,
    ["{\"scriptHex\":\"\", \"pubkeyHex\":\"0250863ad64a87ae8a2fe83c1af1a8403cb53f53e486d8511dad8a04887e5b23520250863ad64a87ae8a2fe83c1af1a8403cb53f53e486d8511dad8a04887e5b2352\", \"network\":\"mainnet\", \"hashType\":\"p2pkh\"}"],
    "{\"error\":{\"code\":1,\"type\":\"illegal_argument\",\"message\":\"Invalid Pubkey data.\"}}"
  )
]

TestHelper.doTest("CreateAddress", testCase);
TestHelper.doTest("CreateAddress ErrorCase", errorCase);
