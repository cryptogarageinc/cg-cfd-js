import { CreateUnblindedAddress } from "../build/Release/cfd_js"
import TestHelper from "./TestHelper"

const testCase = [
  TestHelper.createElementsTestCase(
    "CreateUnblindedAddress p2pkh liquidv1",
    CreateUnblindedAddress,
    ["{\"pubkeyHex\":\"02054feb47f9c5142beb9ec06cb7c7d2e2a1be1f58e1fba3aa32ad6c2bbc53f6ce\", \"elementsNetwork\":\"liquidv1\"}"],
    "{\"unblindedAddress\":\"QKXGAM4Cvd1fvLEz5tbq4YwNRzTjdMWi2q\"}"
  ),
  TestHelper.createElementsTestCase(
    "CreateUnblindedAddress p2sh liquidv1",
    CreateUnblindedAddress,
    ["{\"scriptHex\":\"5221026922ebe722bad2f73f1f2f4f8be39a8215bc5d68d2f12b655c9ed7290b419461210359d250d32ab5e30246d3a15fe9ec202613b3c2354133184e1aada4f5ff570b1d52ae\", \"elementsNetwork\":\"liquidv1\"}"],
    "{\"unblindedAddress\":\"Gr23S1t38iLfYhoA3JVB41XgnHrGeuu4gW\"}"
  ),
  TestHelper.createElementsTestCase(
    "CreateUnblindedAddress p2pkh regtest",
    CreateUnblindedAddress,
    ["{\"pubkeyHex\":\"0221a8c3759f94ee780086ef2e180401ab57e65eb37a8ad4048c9304a3aa430d46\", \"elementsNetwork\":\"regtest\"}"],
    "{\"unblindedAddress\":\"2duUQnx5zuEhwsXtwpcYoA1xBGTzw7qDn18\"}"
  ),
  TestHelper.createElementsTestCase(
    "CreateUnblindedAddress p2sh regtest",
    CreateUnblindedAddress,
    ["{\"scriptHex\":\"5221024c055f6ed23a35f72ee508c3ad51b131686340ef54ea56357b9a025ffb6b93002103c6c56c7b12b4d224f036fb47987b579e871d3f4919a6801cf9df56615ff0f22152ae\", \"elementsNetwork\":\"regtest\"}"],
    "{\"unblindedAddress\":\"XRpicZNrFZumBMhRV5BSYW28pGX7JyY1ua\"}"
  )
]

const errorCase = [
  TestHelper.createElementsTestCase(
    "CreateUnblindedAddress empty pubkey and script",
    CreateUnblindedAddress,
    ["{\"pubkeyHex\":\"\", \"scriptHex\":\"\", \"elementsNetwork\":\"liquidv1\"}"],
    "{\"error\":{\"code\":1,\"type\":\"illegal_argument\",\"message\":\"pubkey_hex and script_hex is empty.\"}}"
  ),
  TestHelper.createElementsTestCase(
    "CreateUnblindedAddress invalid elementsNetwork",
    CreateUnblindedAddress,
    ["{\"pubkeyHex\":\"025476c2e83188368da1ff3e292e7acafcdb3566bb0ad253f62fc70f07aeee6357\", \"elementsNetwork\":\"liquidv2\"}"],
    "{\"error\":{\"code\":1,\"type\":\"illegal_argument\",\"message\":\"Invalid elements_network_type passed. elements_network_type must be \\\"liquidv1\\\" or \\\"regtest\\\".\"}}"
  ),
  TestHelper.createElementsTestCase(
    "CreateUnblindedAddress invalid pubkey",
    CreateUnblindedAddress,
    ["{\"pubkeyHex\":\"210279be667ef9dcbbac55a06295ce870b07029bfcdb2dce28d959f2815b16f81798ac\", \"elementsNetwork\":\"liquidv1\"}"],
    "{\"error\":{\"code\":1,\"type\":\"illegal_argument\",\"message\":\"Invalid Pubkey data.\"}}"
  ),
  TestHelper.createElementsTestCase(
    "CreateUnblindedAddress invalid script",
    CreateUnblindedAddress,
    ["{\"scriptHex\":\"56210307b8ae49ac90a048e9b53357a2354b3334e9c8bee813ecb98e99a7e07e8c3ba32103b28f0c28bfab5455\", \"elementsNetwork\":\"liquidv1\"}"],
    "{\"error\":{\"code\":1,\"type\":\"illegal_argument\",\"message\":\"buffer is incorrect size.\"}}"
  ),
  TestHelper.createElementsTestCase(
    "CreateUnblindedAddress not hex pubkey",
    CreateUnblindedAddress,
    ["{\"pubkeyHex\":\"210279be667ef9dcbbac55a06295ce870b07029bfcdb2dce28d959f2815b16f81798a\", \"elementsNetwork\":\"liquidv1\"}"],
    "{\"error\":{\"code\":1,\"type\":\"illegal_argument\",\"message\":\"hex to byte convert error.\"}}"
  ),
  TestHelper.createElementsTestCase(
    "CreateUnblindedAddress not hex script",
    CreateUnblindedAddress,
    ["{\"scriptHex\":\"xxxx\", \"elementsNetwork\":\"liquidv1\"}"],
    "{\"error\":{\"code\":1,\"type\":\"illegal_argument\",\"message\":\"hex to byte convert error.\"}}"
  ),
]

TestHelper.doTest("CreateUnblindedAddress", testCase);
TestHelper.doTest("CreateUnblindedAddress ErrorCase", errorCase);
