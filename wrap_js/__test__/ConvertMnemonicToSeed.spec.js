import { ConvertMnemonicToSeed } from "../build/Release/cfd_js"
import TestHelper from "./TestHelper"
import Bip39DataSource from './data/Bip39DataSource'

const testCase = []
const testLanguage = ["en"/*, "jp"*/]
testLanguage.forEach(lang => {
  const testVectors = Bip39DataSource.GetTestVector(lang)
  testVectors.forEach((testVector, idx) => {
    const reqJson = {
      mnemonic: testVector.mnemonic,
      passphrase: testVector.passphrase,
      strictCheck: true,
      language: lang,
      useIdeographicSpace: testVector.use_ideographic_space
    }
    const expectJson = {
      seed: testVector.seed,
      entropy: testVector.entropy
    }

    testCase.push(TestHelper.createTestCase(
      `ConvertMnemonicToSeed Test [case ${idx}, lang ${lang}]`,
      ConvertMnemonicToSeed,
      [JSON.stringify(reqJson)],
      JSON.stringify(expectJson)
    ))
  })
})

const errorCase = [
  TestHelper.createTestCase(
    "ConvertMnemonicToSeed Error(invalid language)",
    ConvertMnemonicToSeed,
    ['{"mnemonic":["abandon","abandon","abandon","abandon","abandon","abandon","abandon","abandon","abandon","abandon","abandon","about"], "passphrase":"TREZOR", "language":"zz"}'],
    '{"error":{"code":1,"type":"illegal_argument","message":"Failed to ConvertMnemonicToSeed. Not support language passed."}}'
  ),
  TestHelper.createTestCase(
    "ConvertMnemonicToSeed Error(strict check error)",
    ConvertMnemonicToSeed,
    ['{"mnemonic":["aa","aa","aa","aa","aa","aa","aa","aa","aa","aa","aa","abort"], "passphrase":"TREZOR", "strict_check": true}'],
    '{"error":{"code":1,"type":"illegal_argument","message":"Failed to ConvertMnemonicToSeed. Convert mnemonic to entropy error."}}'
  ),
  // FIXME: be able to handle multi-byte char in cfd-core(libwally)'s bip39_mnemonic_to_seed()
  // TestHelper.createTestCase(
  //   "ConvertMnemonicToSeed Error(mnemonic and language unmatch error)",
  //   ConvertMnemonicToSeed,
  //   ['{"abandon","abandon","abandon","abandon","abandon","abandon","abandon","abandon","abandon","abandon","abandon","about"], "passphrase":"TREZOR", "strict_check": true, language":"zhs"}'],
  //   '{"error":{"code":1,"type":"illegal_argument","message":"Failed to ConvertMnemonicToSeed. Not support language passed."}}'
  // ),
]

TestHelper.doTest("ConvertMnemonicToSeed", testCase);
TestHelper.doTest("ConvertMnemonicToSeed ErrorCase", errorCase);
