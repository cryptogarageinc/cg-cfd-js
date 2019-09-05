import { GetUnblindedAddress } from "../build/Release/cfd_js"
import TestHelper from "./TestHelper"

const testCase = [
  TestHelper.createElementsTestCase(
    "GetUnblindedAddress p2pkh liquidv1",
    GetUnblindedAddress,
    ["{\"confidentialAddress\":\"VTpzXgHQpnRJ9D8hJqE5GN2zmz85C9PcE3iB443QuboWqUR8dpiaTFBPWkFxAevuoKFdWJjNqjY618SJ\"}"],
    "{\"unblindedAddress\":\"QKXGAM4Cvd1fvLEz5tbq4YwNRzTjdMWi2q\"}"
  ),
  TestHelper.createElementsTestCase(
    "GetUnblindedAddress p2sh liquidv1",
    GetUnblindedAddress,
    ["{\"confidentialAddress\":\"VJL8So7Ha23fNPKPhosy2W5jDEACk2j2RLuQxBsdiZJuBniT2iaeikj4SemzspStdXJUBwPdAtUR2oJ8\"}"],
    "{\"unblindedAddress\":\"Gr23S1t38iLfYhoA3JVB41XgnHrGeuu4gW\"}"
  ),
  TestHelper.createElementsTestCase(
    "GetUnblindedAddress p2pkh regtest",
    GetUnblindedAddress,
    ["{\"confidentialAddress\":\"CTErPvJj89tTVNWyZ28jzjnM96iSoPhoFz7Cpgcu3fFbuufFtbyb9vqf1WsxrC2hz3rTKzjepXcc35CE\"}"],
    "{\"unblindedAddress\":\"2duUQnx5zuEhwsXtwpcYoA1xBGTzw7qDn18\"}"
  ),
  TestHelper.createElementsTestCase(
    "GetUnblindedAddress p2sh regtest",
    GetUnblindedAddress,
    ["{\"confidentialAddress\":\"AzptfproXqXSz52kFUDAN4WJe3nVkxyapTkVkmN67Jmw4isdLWXrXF4jcF3354LcaQ5ZsBrvRmvWUz73\"}"],
    "{\"unblindedAddress\":\"XRpicZNrFZumBMhRV5BSYW28pGX7JyY1ua\"}"
  )
]

const errorCase = [
  TestHelper.createElementsTestCase(
    "GetUnblindedAddress empty confidentialAddress",
    GetUnblindedAddress,
    ["{\"confidentialAddress\":\"\"}"],
    "{\"error\":{\"code\":1,\"type\":\"illegal_argument\",\"message\":\"unblinded_addrss is empty.\"}}"
  ),
  TestHelper.createElementsTestCase(
    "GetUnblindedAddress base58 error confidentialAddress",
    GetUnblindedAddress,
    ["{\"confidentialAddress\":\"AzpmFvJXU5ZcrGkP7uBWWySsf5jzDMVAXSUSG9L51kwELsUcXYSaPDydQeUABe94XkZSUH4ZpmiN\"}"],
    "{\"error\":{\"code\":1,\"type\":\"illegal_argument\",\"message\":\"ElementsUnblindedAddress Base58 decode error.\"}}"
  ),
  TestHelper.createElementsTestCase(
    "GetUnblindedAddress conf_prefix error confidentialAddress",
    GetUnblindedAddress,
    ["{\"confidentialAddress\":\"T8mNb29Ntzsw6GUeWACCZYenBta94U7VA38nQDbAdT2raWz3Qn16vLDnSkvQbbgMZTTKZDqgAJJJKEYx\"}"],
    "{\"error\":{\"code\":1,\"type\":\"illegal_argument\",\"message\":\"DecodeAddress received unknown address prefix.\"}}"
  ),
  TestHelper.createElementsTestCase(
    "GetUnblindedAddress hashtype_prefix error confidentialAddress",
    GetUnblindedAddress,
    ["{\"confidentialAddress\":\"VXXCAHmGin5Y5th14FQKZntmXWdihMZnqj9ZCLYgFXWcQxfe1FVDEGdNtNwgVTTtsKUuQLT7sGJdBioJ\"}"],
    "{\"error\":{\"code\":1,\"type\":\"illegal_argument\",\"message\":\"DecodeAddress received unknown address prefix.\"}}"
  ),
  TestHelper.createElementsTestCase(
    "GetUnblindedAddress key error confidentialAddress",
    GetUnblindedAddress,
    ["{\"confidentialAddress\":\"VTqMKzQMP1ZRHZ8uqAetDjo2tbYrH1w9dzaA61UqVuj5tfm2fWY6ouUJ5Jye9PfczwZuZ5bPTpkFaANY\"}"],
    "{\"error\":{\"code\":1,\"type\":\"illegal_argument\",\"message\":\"Invalid Pubkey data.\"}}"
  ),
  TestHelper.createElementsTestCase(
    "GetUnblindedAddress size error confidentialAddress",
    GetUnblindedAddress,
    ["{\"confidentialAddress\":\"7T1uTSDKzVsN6wQVcm1F7CZdCYyRxzdqmC35YWEgrXYPAd7px1qqpBTphGh6FRTG8mvABPNWWdngidE\"}"],
    "{\"error\":{\"code\":1,\"type\":\"illegal_argument\",\"message\":\"DecodeAddress error. Invalid contained hash data size.\"}}"
  ),
]

TestHelper.doTest("GetUnblindedAddress", testCase);
TestHelper.doTest("GetUnblindedAddress ErrorCase", errorCase);
