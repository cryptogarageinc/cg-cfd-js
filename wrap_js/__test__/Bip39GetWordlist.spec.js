import { Bip39GetWordlist } from "../build/Release/cfd_js"
import TestHelper from "./TestHelper"
import Bip39DataSource from './data/Bip39DataSource'

const testCase = [
  TestHelper.createTestCase(
    "Bip39GetWordlist en",
    Bip39GetWordlist,
    ['{"language":"en"}'],
    `{"wordlist":${JSON.stringify(Bip39DataSource.GetWordlist('en'))}}`
  ),
  TestHelper.createTestCase(
    "Bip39GetWordlist es",
    Bip39GetWordlist,
    ['{"language":"es"}'],
    `{"wordlist":${JSON.stringify(Bip39DataSource.GetWordlist('es'))}}`
  ),
  TestHelper.createTestCase(
    "Bip39GetWordlist fr",
    Bip39GetWordlist,
    ['{"language":"fr"}'],
    `{"wordlist":${JSON.stringify(Bip39DataSource.GetWordlist('fr'))}}`
  ),
  TestHelper.createTestCase(
    "Bip39GetWordlist it",
    Bip39GetWordlist,
    ['{"language":"it"}'],
    `{"wordlist":${JSON.stringify(Bip39DataSource.GetWordlist('it'))}}`
  ),
  TestHelper.createTestCase(
    "Bip39GetWordlist jp",
    Bip39GetWordlist,
    ['{"language":"jp"}'],
    `{"wordlist":${JSON.stringify(Bip39DataSource.GetWordlist('jp'))}}`
  ),
  TestHelper.createTestCase(
    "Bip39GetWordlist zhs",
    Bip39GetWordlist,
    ['{"language":"zhs"}'],
    `{"wordlist":${JSON.stringify(Bip39DataSource.GetWordlist('zhs'))}}`
  ),
  TestHelper.createTestCase(
    "Bip39GetWordlist zht",
    Bip39GetWordlist,
    ['{"language":"zht"}'],
    `{"wordlist":${JSON.stringify(Bip39DataSource.GetWordlist('zht'))}}`
  ),
]

const errorCase = [
  TestHelper.createTestCase(
    "Bip39GetWordlist Error(invalid language)",
    Bip39GetWordlist,
    ['{"language":"zzz"}'],
    '{"error":{"code":1,"type":"illegal_argument","message":"BIP39 not support language passed."}}'
  ),
  TestHelper.createTestCase(
    "Bip39GetWordlist Error(empty language)",
    Bip39GetWordlist,
    ['{"language":""}'],
    '{"error":{"code":1,"type":"illegal_argument","message":"BIP39 not support language passed."}}'
  ),
]

TestHelper.doTest("Bip39GetWordlist", testCase);
TestHelper.doTest("Bip39GetWordlist ErrorCase", errorCase);
