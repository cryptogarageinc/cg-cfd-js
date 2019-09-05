import { GetConfidentialAddress } from "../build/Release/cfd_js"
import TestHelper from "./TestHelper"

const testCase = [
  TestHelper.createElementsTestCase(
    "GetConfidentialAddress p2pkh liquidv1",
    GetConfidentialAddress,
    ["{\"unblindedAddress\":\"QKXGAM4Cvd1fvLEz5tbq4YwNRzTjdMWi2q\", \"key\":\"02f008a3abacadc56e714db62a6c248514440a0119ac53f7f8abe81a1687706298\"}"],
    "{\"confidentialAddress\":\"VTpzXgHQpnRJ9D8hJqE5GN2zmz85C9PcE3iB443QuboWqUR8dpiaTFBPWkFxAevuoKFdWJjNqjY618SJ\"}"
  ),
  TestHelper.createElementsTestCase(
    "GetConfidentialAddress p2sh liquidv1",
    GetConfidentialAddress,
    ["{\"unblindedAddress\":\"Gr23S1t38iLfYhoA3JVB41XgnHrGeuu4gW\", \"key\":\"026af56b95a94f1d1633a1cd7334b996bef05619b7547287fc20075867265f9949\"}"],
    "{\"confidentialAddress\":\"VJL8So7Ha23fNPKPhosy2W5jDEACk2j2RLuQxBsdiZJuBniT2iaeikj4SemzspStdXJUBwPdAtUR2oJ8\"}"
  ),
  TestHelper.createElementsTestCase(
    "GetConfidentialAddress p2pkh regtest",
    GetConfidentialAddress,
    ["{\"unblindedAddress\":\"2duUQnx5zuEhwsXtwpcYoA1xBGTzw7qDn18\", \"key\":\"02f7d254f0a8502cc3bb6d6ccd3ddb41664b95aa863debdc4e25666bd5e261f9d7\"}"],
    "{\"confidentialAddress\":\"CTErPvJj89tTVNWyZ28jzjnM96iSoPhoFz7Cpgcu3fFbuufFtbyb9vqf1WsxrC2hz3rTKzjepXcc35CE\"}"
  ),
  TestHelper.createElementsTestCase(
    "GetConfidentialAddress p2sh regtest",
    GetConfidentialAddress,
    ["{\"unblindedAddress\":\"XRpicZNrFZumBMhRV5BSYW28pGX7JyY1ua\", \"key\":\"03662a01c232918c9deb3b330272483c3e4ec0c6b5da86df59252835afeb4ab5f9\"}"],
    "{\"confidentialAddress\":\"AzptfproXqXSz52kFUDAN4WJe3nVkxyapTkVkmN67Jmw4isdLWXrXF4jcF3354LcaQ5ZsBrvRmvWUz73\"}"
  )
]

const errorCase = [
  TestHelper.createElementsTestCase(
    "GetConfidentialAddress empty unblindedAddress",
    GetConfidentialAddress,
    ["{\"unblindedAddress\":\"\", \"key\":\"025476c2e83188368da1ff3e292e7acafcdb3566bb0ad253f62fc70f07aeee6357\"}"],
    "{\"error\":{\"code\":1,\"type\":\"illegal_argument\",\"message\":\"unblinded_addrss is empty.\"}}"
  ),
  TestHelper.createElementsTestCase(
    "GetConfidentialAddress empty key",
    GetConfidentialAddress,
    ["{\"unblindedAddress\":\"XPc9HpNnrr4ck37bysq35tWv9J8AiN2rky\", \"key\":\"\"}"],
    "{\"error\":{\"code\":1,\"type\":\"illegal_argument\",\"message\":\"key is empty.\"}}"
  ),
  TestHelper.createElementsTestCase(
    "GetConfidentialAddress invalid unblindedAddress",
    GetConfidentialAddress,
    ["{\"unblindedAddress\":\"025476c2e83188368da1ff3e292e7acafcdb3566bb0ad253f62fc70f07aeee6357\", \"key\":\"025476c2e83188368da1ff3e292e7acafcdb3566bb0ad253f62fc70f07aeee6357\"}"],
    "{\"error\":{\"code\":1,\"type\":\"illegal_argument\",\"message\":\"ElementsUnblindedAddress Base58 decode error.\"}}"
  ),
  TestHelper.createElementsTestCase(
    "GetConfidentialAddress invalid key",
    GetConfidentialAddress,
    ["{\"unblindedAddress\":\"GkSEheszYzEBMgX9G9ueaAyLVg8gfZwiDY\", \"key\":\"c2e83188368da1ff3e292e7acafcdb3566bb0ad253f62fc70f07aeee6357\"}"],
    "{\"error\":{\"code\":1,\"type\":\"illegal_argument\",\"message\":\"Invalid Pubkey data.\"}}"
  ),
  TestHelper.createElementsTestCase(
    "GetConfidentialAddress not hex key",
    GetConfidentialAddress,
    ["{\"unblindedAddress\":\"GkSEheszYzEBMgX9G9ueaAyLVg8gfZwiDY\", \"key\":\"xxxxxx\"}"],
    "{\"error\":{\"code\":1,\"type\":\"illegal_argument\",\"message\":\"hex to byte convert error.\"}}"
  ),
  TestHelper.createElementsTestCase(
    "GetConfidentialAddress prefix error",
    GetConfidentialAddress,
    ["{\"unblindedAddress\":\"T8tV479DttFoeNDbFpw4TRqsqXGLdCSnwm\", \"key\":\"02f008a3abacadc56e714db62a6c248514440a0119ac53f7f8abe81a1687706298\"}"],
    "{\"error\":{\"code\":1,\"type\":\"illegal_argument\",\"message\":\"DecodeAddress received unknown address prefix.\"}}"
  ),
]

TestHelper.doTest("GetConfidentialAddress", testCase);
TestHelper.doTest("GetConfidentialAddress ErrorCase", errorCase);
