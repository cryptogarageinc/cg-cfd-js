const {ParseDescriptor} = require('../cfdjs_raw_module');
const TestHelper = require('./TestHelper');
const testCase = [
  TestHelper.createBitcoinTestCase(
    'ParseDescriptor pkh mainnet',
    ParseDescriptor,
    ['{"isElements":false,"descriptor":"pkh(02c6047f9441ed7d6d3045406e95c07cd85c778e4b8cef3ca7abac09b95c709ee5)","network":"mainnet"}'],
    '{\"type\":\"pkh\",\"address\":\"1cMh228HTCiwS8ZsaakH8A8wze1JR5ZsP\",\"lockingScript\":\"76a91406afd46bcdfd22ef94ac122aa11f241244a37ecc88ac\",\"hashType\":\"p2pkh\",\"scripts\":[{\"depth\":0,\"lockingScript\":\"76a91406afd46bcdfd22ef94ac122aa11f241244a37ecc88ac\",\"address\":\"1cMh228HTCiwS8ZsaakH8A8wze1JR5ZsP\",\"hashType\":\"p2pkh\",\"keyType\":\"pubkey\",\"key\":\"02c6047f9441ed7d6d3045406e95c07cd85c778e4b8cef3ca7abac09b95c709ee5\"}]}'
  ),
  TestHelper.createBitcoinTestCase(
    'ParseDescriptor pkh testnet',
    ParseDescriptor,
    ['{"isElements":false,"descriptor":"pkh(02c6047f9441ed7d6d3045406e95c07cd85c778e4b8cef3ca7abac09b95c709ee5)","network":"testnet"}'],
    '{\"type\":\"pkh\",\"address\":\"mg8Jz5776UdyiYcBb9Z873NTozEiADRW5H\",\"lockingScript\":\"76a91406afd46bcdfd22ef94ac122aa11f241244a37ecc88ac\",\"hashType\":\"p2pkh\",\"scripts\":[{\"depth\":0,\"lockingScript\":\"76a91406afd46bcdfd22ef94ac122aa11f241244a37ecc88ac\",\"address\":\"mg8Jz5776UdyiYcBb9Z873NTozEiADRW5H\",\"hashType\":\"p2pkh\",\"keyType\":\"pubkey\",\"key\":\"02c6047f9441ed7d6d3045406e95c07cd85c778e4b8cef3ca7abac09b95c709ee5\"}]}'
  ),
  TestHelper.createBitcoinTestCase(
    'ParseDescriptor pk mainnet',
    ParseDescriptor,
    ['{"isElements":false,"descriptor":"pk(0279be667ef9dcbbac55a06295ce870b07029bfcdb2dce28d959f2815b16f81798)","network":"mainnet"}'],
    '{\"type\":\"pk\",\"address\":\"1BgGZ9tcN4rm9KBzDn7KprQz87SZ26SAMH\",\"lockingScript\":\"210279be667ef9dcbbac55a06295ce870b07029bfcdb2dce28d959f2815b16f81798ac\",\"scripts\":[{\"depth\":0,\"lockingScript\":\"210279be667ef9dcbbac55a06295ce870b07029bfcdb2dce28d959f2815b16f81798ac\",\"address\":\"1BgGZ9tcN4rm9KBzDn7KprQz87SZ26SAMH\",\"keyType\":\"pubkey\",\"key\":\"0279be667ef9dcbbac55a06295ce870b07029bfcdb2dce28d959f2815b16f81798\"}]}'
  ),
  TestHelper.createBitcoinTestCase(
    'ParseDescriptor wpkh mainnet',
    ParseDescriptor,
    ['{"isElements":false,"descriptor":"wpkh(02f9308a019258c31049344f85f89d5229b531c845836f99b08601f113bce036f9)","network":"mainnet"}'],
    '{\"type\":\"wpkh\",\"address\":\"bc1q0ht9tyks4vh7p5p904t340cr9nvahy7u3re7zg\",\"lockingScript\":\"00147dd65592d0ab2fe0d0257d571abf032cd9db93dc\",\"hashType\":\"p2wpkh\",\"scripts\":[{\"depth\":0,\"lockingScript\":\"00147dd65592d0ab2fe0d0257d571abf032cd9db93dc\",\"address\":\"bc1q0ht9tyks4vh7p5p904t340cr9nvahy7u3re7zg\",\"hashType\":\"p2wpkh\",\"keyType\":\"pubkey\",\"key\":\"02f9308a019258c31049344f85f89d5229b531c845836f99b08601f113bce036f9\"}]}'
  ),
  TestHelper.createBitcoinTestCase(
    'ParseDescriptor sh-wpkh mainnet',
    ParseDescriptor,
    ['{"isElements":false,"descriptor":"sh(wpkh(03fff97bd5755eeea420453a14355235d382f6472f8568a18b2f057a1460297556))","network":"mainnet"}'],
    '{\"type\":\"sh\",\"address\":\"3LKyvRN6SmYXGBNn8fcQvYxW9MGKtwcinN\",\"lockingScript\":\"a914cc6ffbc0bf31af759451068f90ba7a0272b6b33287\",\"hashType\":\"p2sh-p2wpkh\",\"redeemScript\":\"00147fda9cf020c16cacf529c87d8de89bfc70b8c9cb\",\"scripts\":[{\"depth\":0,\"lockingScript\":\"a914cc6ffbc0bf31af759451068f90ba7a0272b6b33287\",\"address\":\"3LKyvRN6SmYXGBNn8fcQvYxW9MGKtwcinN\",\"hashType\":\"p2sh-p2wpkh\",\"redeemScript\":\"00147fda9cf020c16cacf529c87d8de89bfc70b8c9cb\"},{\"depth\":1,\"lockingScript\":\"00147fda9cf020c16cacf529c87d8de89bfc70b8c9cb\",\"address\":\"bc1q0ldfeupqc9k2eaffep7cm6yml3ct3jwtwzqt7k\",\"hashType\":\"p2wpkh\",\"keyType\":\"pubkey\",\"key\":\"03fff97bd5755eeea420453a14355235d382f6472f8568a18b2f057a1460297556\"}]}'
  ),
  TestHelper.createBitcoinTestCase(
    'ParseDescriptor combo mainnet',
    ParseDescriptor,
    ['{"isElements":false,"descriptor":"combo(0279be667ef9dcbbac55a06295ce870b07029bfcdb2dce28d959f2815b16f81798)","network":"mainnet"}'],
    '{\"type\":\"combo\",\"address\":\"bc1qw508d6qejxtdg4y5r3zarvary0c5xw7kv8f3t4\",\"lockingScript\":\"0014751e76e8199196d454941c45d1b3a323f1433bd6\",\"hashType\":\"p2wpkh\",\"scripts\":[{\"depth\":0,\"lockingScript\":\"0014751e76e8199196d454941c45d1b3a323f1433bd6\",\"address\":\"bc1qw508d6qejxtdg4y5r3zarvary0c5xw7kv8f3t4\",\"hashType\":\"p2wpkh\",\"keyType\":\"pubkey\",\"key\":\"0279be667ef9dcbbac55a06295ce870b07029bfcdb2dce28d959f2815b16f81798\"},{\"depth\":0,\"lockingScript\":\"a914bcfeb728b584253d5f3f70bcb780e9ef218a68f487\",\"address\":\"3JvL6Ymt8MVWiCNHC7oWU6nLeHNJKLZGLN\",\"hashType\":\"p2sh-p2wpkh\",\"redeemScript\":\"0014751e76e8199196d454941c45d1b3a323f1433bd6\"},{\"depth\":0,\"lockingScript\":\"76a914751e76e8199196d454941c45d1b3a323f1433bd688ac\",\"address\":\"1BgGZ9tcN4rm9KBzDn7KprQz87SZ26SAMH\",\"hashType\":\"p2pkh\",\"keyType\":\"pubkey\",\"key\":\"0279be667ef9dcbbac55a06295ce870b07029bfcdb2dce28d959f2815b16f81798\"},{\"depth\":0,\"lockingScript\":\"210279be667ef9dcbbac55a06295ce870b07029bfcdb2dce28d959f2815b16f81798ac\",\"address\":\"1BgGZ9tcN4rm9KBzDn7KprQz87SZ26SAMH\",\"keyType\":\"pubkey\",\"key\":\"0279be667ef9dcbbac55a06295ce870b07029bfcdb2dce28d959f2815b16f81798\"}]}'
  ),
  TestHelper.createBitcoinTestCase(
    'ParseDescriptor sh-wsh(+pkh) mainnet',
    ParseDescriptor,
    ['{"isElements":false,"descriptor":"sh(wsh(pkh(02e493dbf1c10d80f3581e4904930b1404cc6c13900ee0758474fa94abe8c4cd13)))","network":"mainnet"}'],
    '{\"type\":\"sh\",\"address\":\"39XGHYpYmJV9sGFoGHZeU2rLkY6r1MJ6C1\",\"lockingScript\":\"a91455e8d5e8ee4f3604aba23c71c2684fa0a56a3a1287\",\"hashType\":\"p2sh-p2wsh\",\"redeemScript\":\"0020fc5acc302aab97f821f9a61e1cc572e7968a603551e95d4ba12b51df6581482f\",\"scripts\":[{\"depth\":0,\"lockingScript\":\"a91455e8d5e8ee4f3604aba23c71c2684fa0a56a3a1287\",\"address\":\"39XGHYpYmJV9sGFoGHZeU2rLkY6r1MJ6C1\",\"hashType\":\"p2sh-p2wsh\",\"redeemScript\":\"0020fc5acc302aab97f821f9a61e1cc572e7968a603551e95d4ba12b51df6581482f\"},{\"depth\":1,\"lockingScript\":\"0020fc5acc302aab97f821f9a61e1cc572e7968a603551e95d4ba12b51df6581482f\",\"address\":\"bc1ql3dvcvp24wtlsg0e5c0pe3tju7tg5cp428546jap9dga7evpfqhsncqcl0\",\"hashType\":\"p2wsh\",\"redeemScript\":\"76a914c42e7ef92fdb603af844d064faad95db9bcdfd3d88ac\"},{\"depth\":2,\"lockingScript\":\"76a914c42e7ef92fdb603af844d064faad95db9bcdfd3d88ac\",\"address\":\"1JtK9CQw1syfWj1WtFMWomrYdV3W2tWBF9\",\"hashType\":\"p2pkh\",\"keyType\":\"pubkey\",\"key\":\"02e493dbf1c10d80f3581e4904930b1404cc6c13900ee0758474fa94abe8c4cd13\"}]}'
  ),
  TestHelper.createBitcoinTestCase(
    'ParseDescriptor multi mainnet',
    ParseDescriptor,
    ['{"isElements":false,"descriptor":"multi(1,022f8bde4d1a07209355b4a7250a5c5128e88b84bddc619ab7cba8d569b240efe4,025cbdf0646e5db4eaa398f365f2ea7a0e3d419b7e0330e39ce92bddedcac4f9bc)","network":"mainnet"}'],
    '{\"type\":\"multi\",\"address\":\"17Vu7st1U1KwymUKU4jJheHHGRVNqrcfLD\",\"lockingScript\":\"5121022f8bde4d1a07209355b4a7250a5c5128e88b84bddc619ab7cba8d569b240efe421025cbdf0646e5db4eaa398f365f2ea7a0e3d419b7e0330e39ce92bddedcac4f9bc52ae\",\"scripts\":[{\"depth\":0,\"lockingScript\":\"5121022f8bde4d1a07209355b4a7250a5c5128e88b84bddc619ab7cba8d569b240efe421025cbdf0646e5db4eaa398f365f2ea7a0e3d419b7e0330e39ce92bddedcac4f9bc52ae\",\"address\":\"17Vu7st1U1KwymUKU4jJheHHGRVNqrcfLD\",\"keys\":[{\"keyType\":\"pubkey\",\"key\":\"022f8bde4d1a07209355b4a7250a5c5128e88b84bddc619ab7cba8d569b240efe4\"},{\"keyType\":\"pubkey\",\"key\":\"025cbdf0646e5db4eaa398f365f2ea7a0e3d419b7e0330e39ce92bddedcac4f9bc\"}]}]}'
  ),
  TestHelper.createBitcoinTestCase(
    'ParseDescriptor sh(multi) mainnet',
    ParseDescriptor,
    ['{"isElements":false,"descriptor":"sh(multi(2,022f01e5e15cca351daff3843fb70f3c2f0a1bdd05e5af888a67784ef3e10a2a01,03acd484e2f0c7f65309ad178a9f559abde09796974c57e714c35f110dfc27ccbe))","network":"mainnet"}'],
    '{\"type\":\"sh\",\"address\":\"3GtEB3yg3r5de2cDJG48SkQwxfxJumKQdN\",\"lockingScript\":\"a914a6a8b030a38762f4c1f5cbe387b61a3c5da5cd2687\",\"hashType\":\"p2sh\",\"redeemScript\":\"5221022f01e5e15cca351daff3843fb70f3c2f0a1bdd05e5af888a67784ef3e10a2a012103acd484e2f0c7f65309ad178a9f559abde09796974c57e714c35f110dfc27ccbe52ae\",\"scripts\":[{\"depth\":0,\"lockingScript\":\"a914a6a8b030a38762f4c1f5cbe387b61a3c5da5cd2687\",\"address\":\"3GtEB3yg3r5de2cDJG48SkQwxfxJumKQdN\",\"redeemScript\":\"5221022f01e5e15cca351daff3843fb70f3c2f0a1bdd05e5af888a67784ef3e10a2a012103acd484e2f0c7f65309ad178a9f559abde09796974c57e714c35f110dfc27ccbe52ae\",\"keys\":[{\"keyType\":\"pubkey\",\"key\":\"022f01e5e15cca351daff3843fb70f3c2f0a1bdd05e5af888a67784ef3e10a2a01\"},{\"keyType\":\"pubkey\",\"key\":\"03acd484e2f0c7f65309ad178a9f559abde09796974c57e714c35f110dfc27ccbe\"}]}]}'
  ),
  TestHelper.createBitcoinTestCase(
    'ParseDescriptor sh(sortedmulti) mainnet',
    ParseDescriptor,
    ['{"isElements":false,"descriptor":"sh(sortedmulti(2,03acd484e2f0c7f65309ad178a9f559abde09796974c57e714c35f110dfc27ccbe,022f01e5e15cca351daff3843fb70f3c2f0a1bdd05e5af888a67784ef3e10a2a01))","network":"mainnet"}'],
    '{\"type\":\"sh\",\"address\":\"3GtEB3yg3r5de2cDJG48SkQwxfxJumKQdN\",\"lockingScript\":\"a914a6a8b030a38762f4c1f5cbe387b61a3c5da5cd2687\",\"hashType\":\"p2sh\",\"redeemScript\":\"5221022f01e5e15cca351daff3843fb70f3c2f0a1bdd05e5af888a67784ef3e10a2a012103acd484e2f0c7f65309ad178a9f559abde09796974c57e714c35f110dfc27ccbe52ae\",\"scripts\":[{\"depth\":0,\"lockingScript\":\"a914a6a8b030a38762f4c1f5cbe387b61a3c5da5cd2687\",\"address\":\"3GtEB3yg3r5de2cDJG48SkQwxfxJumKQdN\",\"redeemScript\":\"5221022f01e5e15cca351daff3843fb70f3c2f0a1bdd05e5af888a67784ef3e10a2a012103acd484e2f0c7f65309ad178a9f559abde09796974c57e714c35f110dfc27ccbe52ae\",\"keys\":[{\"keyType\":\"pubkey\",\"key\":\"03acd484e2f0c7f65309ad178a9f559abde09796974c57e714c35f110dfc27ccbe\"},{\"keyType\":\"pubkey\",\"key\":\"022f01e5e15cca351daff3843fb70f3c2f0a1bdd05e5af888a67784ef3e10a2a01\"}]}]}'
  ),
  TestHelper.createBitcoinTestCase(
    'ParseDescriptor wsh(multi) mainnet',
    ParseDescriptor,
    ['{"isElements":false,"descriptor":"wsh(multi(2,03a0434d9e47f3c86235477c7b1ae6ae5d3442d49b1943c2b752a68e2a47e247c7,03774ae7f858a9411e5ef4246b70c65aac5649980be5c17891bbec17895da008cb,03d01115d548e7561b15c38f004d734633687cf4419620095bc5b0f47070afe85a))","network":"mainnet"}'],
    '{\"type\":\"wsh\",\"address\":\"bc1qwu7hp9vckakyuw6htsy244qxtztrlyez4l7qlrpg68v6drgvj39qn4zazc\",\"lockingScript\":\"0020773d709598b76c4e3b575c08aad40658963f9322affc0f8c28d1d9a68d0c944a\",\"hashType\":\"p2wsh\",\"redeemScript\":\"522103a0434d9e47f3c86235477c7b1ae6ae5d3442d49b1943c2b752a68e2a47e247c72103774ae7f858a9411e5ef4246b70c65aac5649980be5c17891bbec17895da008cb2103d01115d548e7561b15c38f004d734633687cf4419620095bc5b0f47070afe85a53ae\",\"scripts\":[{\"depth\":0,\"lockingScript\":\"0020773d709598b76c4e3b575c08aad40658963f9322affc0f8c28d1d9a68d0c944a\",\"address\":\"bc1qwu7hp9vckakyuw6htsy244qxtztrlyez4l7qlrpg68v6drgvj39qn4zazc\",\"hashType\":\"p2wsh\",\"redeemScript\":\"522103a0434d9e47f3c86235477c7b1ae6ae5d3442d49b1943c2b752a68e2a47e247c72103774ae7f858a9411e5ef4246b70c65aac5649980be5c17891bbec17895da008cb2103d01115d548e7561b15c38f004d734633687cf4419620095bc5b0f47070afe85a53ae\",\"keys\":[{\"keyType\":\"pubkey\",\"key\":\"03a0434d9e47f3c86235477c7b1ae6ae5d3442d49b1943c2b752a68e2a47e247c7\"},{\"keyType\":\"pubkey\",\"key\":\"03774ae7f858a9411e5ef4246b70c65aac5649980be5c17891bbec17895da008cb\"},{\"keyType\":\"pubkey\",\"key\":\"03d01115d548e7561b15c38f004d734633687cf4419620095bc5b0f47070afe85a\"}]}]}'
  ),
  TestHelper.createBitcoinTestCase(
    'ParseDescriptor sh-wsh(multi) mainnet',
    ParseDescriptor,
    ['{"isElements":false,"descriptor":"sh(wsh(multi(1,03f28773c2d975288bc7d1d205c3748651b075fbc6610e58cddeeddf8f19405aa8,03499fdf9e895e719cfd64e67f07d38e3226aa7b63678949e6e49b241a60e823e4,02d7924d4f7d43ea965a465ae3095ff41131e5946f3c85f79e44adbcf8e27e080e)))","network":"mainnet"}'],
    '{\"type\":\"sh\",\"address\":\"3Hd7YQStg9gYpEt6hgK14ZHUABxSURzeuQ\",\"lockingScript\":\"a914aec509e284f909f769bb7dda299a717c87cc97ac87\",\"hashType\":\"p2sh-p2wsh\",\"redeemScript\":\"0020ef8110fa7ddefb3e2d02b2c1b1480389b4bc93f606281570cfc20dba18066aee\",\"scripts\":[{\"depth\":0,\"lockingScript\":\"a914aec509e284f909f769bb7dda299a717c87cc97ac87\",\"address\":\"3Hd7YQStg9gYpEt6hgK14ZHUABxSURzeuQ\",\"hashType\":\"p2sh-p2wsh\",\"redeemScript\":\"0020ef8110fa7ddefb3e2d02b2c1b1480389b4bc93f606281570cfc20dba18066aee\"},{\"depth\":1,\"lockingScript\":\"0020ef8110fa7ddefb3e2d02b2c1b1480389b4bc93f606281570cfc20dba18066aee\",\"address\":\"bc1qa7q3p7nammanutgzktqmzjqr3x6teylkqc5p2ux0cgxm5xqxdthq02yr5g\",\"hashType\":\"p2wsh\",\"redeemScript\":\"512103f28773c2d975288bc7d1d205c3748651b075fbc6610e58cddeeddf8f19405aa82103499fdf9e895e719cfd64e67f07d38e3226aa7b63678949e6e49b241a60e823e42102d7924d4f7d43ea965a465ae3095ff41131e5946f3c85f79e44adbcf8e27e080e53ae\",\"keys\":[{\"keyType\":\"pubkey\",\"key\":\"03f28773c2d975288bc7d1d205c3748651b075fbc6610e58cddeeddf8f19405aa8\"},{\"keyType\":\"pubkey\",\"key\":\"03499fdf9e895e719cfd64e67f07d38e3226aa7b63678949e6e49b241a60e823e4\"},{\"keyType\":\"pubkey\",\"key\":\"02d7924d4f7d43ea965a465ae3095ff41131e5946f3c85f79e44adbcf8e27e080e\"}]}]}'
  ),
  TestHelper.createBitcoinTestCase(
    'ParseDescriptor pk hdkey mainnet',
    ParseDescriptor,
    ['{"isElements":false,"descriptor":"pk(xpub661MyMwAqRbcFtXgS5sYJABqqG9YLmC4Q1Rdap9gSE8NqtwybGhePY2gZ29ESFjqJoCu1Rupje8YtGqsefD265TMg7usUDFdp6W1EGMcet8)","network":"mainnet"}'],
    '{\"type\":\"pk\",\"address\":\"15mKKb2eos1hWa6tisdPwwDC1a5J1y9nma\",\"lockingScript\":\"210339a36013301597daef41fbe593a02cc513d0b55527ec2df1050e2e8ff49c85c2ac\",\"scripts\":[{\"depth\":0,\"lockingScript\":\"210339a36013301597daef41fbe593a02cc513d0b55527ec2df1050e2e8ff49c85c2ac\",\"address\":\"15mKKb2eos1hWa6tisdPwwDC1a5J1y9nma\",\"keyType\":\"extPubkey\",\"key\":\"xpub661MyMwAqRbcFtXgS5sYJABqqG9YLmC4Q1Rdap9gSE8NqtwybGhePY2gZ29ESFjqJoCu1Rupje8YtGqsefD265TMg7usUDFdp6W1EGMcet8\"}]}'
  ),
  TestHelper.createBitcoinTestCase(
    'ParseDescriptor pkh hdkey mainnet',
    ParseDescriptor,
    ['{"isElements":false,"descriptor":"pkh(xprvA2YKGLieCs6cWCiczALiH1jzk3VCCS5M1pGQfWPkamCdR9UpBgE2Gb8AKAyVjKHkz8v37avcfRjdcnP19dVAmZrvZQfvTcXXSAiFNQ6tTtU/1h/2)","network":"mainnet"}'],
    '{\"type\":\"pkh\",\"address\":\"1HH6H4km128m4NsJMNVN2qqCHukbEhgU3V\",\"lockingScript\":\"76a914b28d12ab72a51b10114b17ce76b536265194e1fb88ac\",\"hashType\":\"p2pkh\",\"scripts\":[{\"depth\":0,\"lockingScript\":\"76a914b28d12ab72a51b10114b17ce76b536265194e1fb88ac\",\"address\":\"1HH6H4km128m4NsJMNVN2qqCHukbEhgU3V\",\"hashType\":\"p2pkh\",\"keyType\":\"extPrivkey\",\"key\":\"xprvA6Px9oYCqViqTHwPBpmnQoQoVKREy1PwgbsNHg46ZD4NdQwCV7zxfCHJzF7r49LoPaVZ9m5DDRm7UbEzrtNXppy4GfiPELJ6BQmAgt1UZSJ\"}]}'
  ),
  TestHelper.createBitcoinTestCase(
    'ParseDescriptor pkh hdkey-derive mainnet',
    ParseDescriptor,
    ['{"isElements":false,"descriptor":"pkh([d34db33f/44\'/0\'/0\']xpub6ERApfZwUNrhLCkDtcHTcxd75RbzS1ed54G1LkBUHQVHQKqhMkhgbmJbZRkrgZw4koxb5JaHWkY4ALHY2grBGRjaDMzQLcgJvLJuZZvRcEL/1/*)","network":"mainnet","bip32DerivationPath":"0/44"}'],
    '{\"type\":\"pkh\",\"address\":\"1JuR7uD8NgGjK3x9hrir1bTGxS3jTT1ZWt\",\"lockingScript\":\"76a914c463e6dedb2b780434e60fcee3f2d0a0fbcbbc9088ac\",\"hashType\":\"p2pkh\",\"scripts\":[{\"depth\":0,\"lockingScript\":\"76a914c463e6dedb2b780434e60fcee3f2d0a0fbcbbc9088ac\",\"address\":\"1JuR7uD8NgGjK3x9hrir1bTGxS3jTT1ZWt\",\"hashType\":\"p2pkh\",\"keyType\":\"extPubkey\",\"key\":\"xpub6KVE2fr7hNDB8jMhwbwe9f1ynwAP362XwHDVmxcYirGYcaTzYwYdPtWnzc7h6rdgMcrCzp56qDwRUcDEJ35vshPQcQASkV2cFaDkPZEQcyk\"}]}'
  ),
  TestHelper.createBitcoinTestCase(
    'ParseDescriptor wsh(multi) hdkey-derive mainnet',
    ParseDescriptor,
    ['{"isElements":false,"descriptor":"wsh(multi(1,xpub661MyMwAqRbcFW31YEwpkMuc5THy2PSt5bDMsktWQcFF8syAmRUapSCGu8ED9W6oDMSgv6Zz8idoc4a6mr8BDzTJY47LJhkJ8UB7WEGuduB/1/0/*,xpub69H7F5d8KSRgmmdJg2KhpAK8SR3DjMwAdkxj3ZuxV27CprR9LgpeyGmXUbC6wb7ERfvrnKZjXoUmmDznezpbZb7ap6r1D3tgFxHmwMkQTPH/0/0/*))","network":"mainnet","bip32DerivationPath":"10"}'],
    '{\"type\":\"wsh\",\"address\":\"bc1q7yzadku3kxs855wgjxnyr2nk3e44ed75p07lzhnj53ynpczg78nq0leae5\",\"lockingScript\":\"0020f105d6db91b1a07a51c891a641aa768e6b5cb7d40bfdf15e72a44930e048f1e6\",\"hashType\":\"p2wsh\",\"redeemScript\":\"512102c7d7595371a9a01c6f7e34ee46ecfa54aef9c8fa3021b1892c0cad4b1af443f22102f129cf00a0daa7f4a046908e27e5faf783ebc57c4a34467daea67094ce77581352ae\",\"scripts\":[{\"depth\":0,\"lockingScript\":\"0020f105d6db91b1a07a51c891a641aa768e6b5cb7d40bfdf15e72a44930e048f1e6\",\"address\":\"bc1q7yzadku3kxs855wgjxnyr2nk3e44ed75p07lzhnj53ynpczg78nq0leae5\",\"hashType\":\"p2wsh\",\"redeemScript\":\"512102c7d7595371a9a01c6f7e34ee46ecfa54aef9c8fa3021b1892c0cad4b1af443f22102f129cf00a0daa7f4a046908e27e5faf783ebc57c4a34467daea67094ce77581352ae\",\"keys\":[{\"keyType\":\"extPubkey\",\"key\":\"xpub6BgWskLoyHmAu7ZPbBVoZW5RJZ9tk27v7mjgMApM9chxYC26bJkgENT3FPqYp8mCBcVr2bjMezjdqQT68z93R14DcJyXzeWu49nN1sLPC1y\"},{\"keyType\":\"extPubkey\",\"key\":\"xpub6EKMC2gSMfKgpKxeMAZB4aKYTjyDKWmkw5uTaac5UU8SyzXpu21vNcu575tjtJWo2jUpr3KXmoT5jNGRss1JVoQhiNjLsyyaMXrXZD9qnJF\"}]}]}'
  ),
  TestHelper.createBitcoinTestCase(
    'ParseDescriptor wsh(sortedmulti) hdkey-derive mainnet',
    ParseDescriptor,
    ['{"isElements":false,"descriptor":"wsh(sortedmulti(1,xpub661MyMwAqRbcFW31YEwpkMuc5THy2PSt5bDMsktWQcFF8syAmRUapSCGu8ED9W6oDMSgv6Zz8idoc4a6mr8BDzTJY47LJhkJ8UB7WEGuduB/1/0/*,xpub69H7F5d8KSRgmmdJg2KhpAK8SR3DjMwAdkxj3ZuxV27CprR9LgpeyGmXUbC6wb7ERfvrnKZjXoUmmDznezpbZb7ap6r1D3tgFxHmwMkQTPH/0/0/*))","network":"mainnet","bip32DerivationPath":"20"}'],
    '{\"type\":\"wsh\",\"address\":\"bc1qust3eqzh2vuxv78vcq7mrec2jpk33vvw4kmfffpmmd7lplsmnc3snfs96z\",\"lockingScript\":\"0020e4171c805753386678ecc03db1e70a906d18b18eadb694a43bdb7df0fe1b9e23\",\"hashType\":\"p2wsh\",\"redeemScript\":\"512102c57aa6e9aede38183a74ab6c30846b75b41670f4b23eee9c119bcb2138a6898f21038d0eb17ca501b8584994d65ff13a524522fdcfd3feb4f87f35e70f49a2720a2c52ae\",\"scripts\":[{\"depth\":0,\"lockingScript\":\"0020e4171c805753386678ecc03db1e70a906d18b18eadb694a43bdb7df0fe1b9e23\",\"address\":\"bc1qust3eqzh2vuxv78vcq7mrec2jpk33vvw4kmfffpmmd7lplsmnc3snfs96z\",\"hashType\":\"p2wsh\",\"redeemScript\":\"512102c57aa6e9aede38183a74ab6c30846b75b41670f4b23eee9c119bcb2138a6898f21038d0eb17ca501b8584994d65ff13a524522fdcfd3feb4f87f35e70f49a2720a2c52ae\",\"keys\":[{\"keyType\":\"extPubkey\",\"key\":\"xpub6BgWskLoyHmBLsxHAE2qLXnRxr5wf1PfTBAjhFMSp4LRmhghARTxrote35kSLcWDZVsGeh35tDdTXUEzBWGSrpriZgL49P2p4i4kS5B474W\"},{\"keyType\":\"extPubkey\",\"key\":\"xpub6EKMC2gSMfKhGnLRmKzvpVVpaCJ16CinBPGtiDTwUMXiVPopMEFYD6KdNQ8QZY5zNB3HfAJLN9fZrpLk17mGnXKa3gaHv5uAQsqCmPwLU2x\"}]}]}'
  ),
  TestHelper.createBitcoinTestCase(
    'ParseDescriptor addr mainnet',
    ParseDescriptor,
    ['{"isElements":false,"descriptor":"addr(bc1qrp33g0q5c5txsp9arysrx4k6zdkfs4nce4xj0gdcccefvpysxf3qccfmv3)","network":"mainnet"}'],
    '{\"type\":\"addr\",\"address\":\"bc1qrp33g0q5c5txsp9arysrx4k6zdkfs4nce4xj0gdcccefvpysxf3qccfmv3\",\"lockingScript\":\"00201863143c14c5166804bd19203356da136c985678cd4d27a1b8c6329604903262\",\"hashType\":\"p2wsh\"}'
  ),
  TestHelper.createBitcoinTestCase(
    'ParseDescriptor raw mainnet',
    ParseDescriptor,
    ['{"isElements":false,"descriptor":"raw(6a4c4f54686973204f505f52455455524e207472616e73616374696f6e206f7574707574207761732063726561746564206279206d6f646966696564206372656174657261777472616e73616374696f6e2e)#zf2avljj","network":"mainnet"}'],
    '{\"type\":\"raw\",\"lockingScript\":\"6a4c4f54686973204f505f52455455524e207472616e73616374696f6e206f7574707574207761732063726561746564206279206d6f646966696564206372656174657261777472616e73616374696f6e2e\"}'
  ),
  // --- Elements ----
  TestHelper.createElementsTestCase(
    'ParseDescriptor Elements pkh liquidv1',
    ParseDescriptor,
    ['{"isElements":true,"descriptor":"pkh(02054feb47f9c5142beb9ec06cb7c7d2e2a1be1f58e1fba3aa32ad6c2bbc53f6ce)","network":"liquidv1"}'],
    '{\"type\":\"pkh\",\"address\":\"QKXGAM4Cvd1fvLEz5tbq4YwNRzTjdMWi2q\",\"lockingScript\":\"76a914f42331c418ef4517ba644ad6e9fc99681ad4393788ac\",\"hashType\":\"p2pkh\",\"scripts\":[{\"depth\":0,\"lockingScript\":\"76a914f42331c418ef4517ba644ad6e9fc99681ad4393788ac\",\"address\":\"QKXGAM4Cvd1fvLEz5tbq4YwNRzTjdMWi2q\",\"hashType\":\"p2pkh\",\"keyType\":\"pubkey\",\"key\":\"02054feb47f9c5142beb9ec06cb7c7d2e2a1be1f58e1fba3aa32ad6c2bbc53f6ce\"}]}'
  ),
  TestHelper.createElementsTestCase(
    'ParseDescriptor Elements pkh regtest',
    ParseDescriptor,
    ['{"isElements":true,"descriptor":"pkh(02054feb47f9c5142beb9ec06cb7c7d2e2a1be1f58e1fba3aa32ad6c2bbc53f6ce)","network":"regtest"}'],
    '{\"type\":\"pkh\",\"address\":\"2dwgdRg7VJjVdVV4QSZtZNsPQTnKeGMg97s\",\"lockingScript\":\"76a914f42331c418ef4517ba644ad6e9fc99681ad4393788ac\",\"hashType\":\"p2pkh\",\"scripts\":[{\"depth\":0,\"lockingScript\":\"76a914f42331c418ef4517ba644ad6e9fc99681ad4393788ac\",\"address\":\"2dwgdRg7VJjVdVV4QSZtZNsPQTnKeGMg97s\",\"hashType\":\"p2pkh\",\"keyType\":\"pubkey\",\"key\":\"02054feb47f9c5142beb9ec06cb7c7d2e2a1be1f58e1fba3aa32ad6c2bbc53f6ce\"}]}'
  ),
  TestHelper.createElementsTestCase(
    'ParseDescriptor Elements addr regtest',
    ParseDescriptor,
    ['{"isElements":true,"descriptor":"addr(ert1q0jnggjwnn22a4ywxc2pcw86c0d6tghqkgk3hlryrxl7nmxkylmnq3j0gqq)","network":"regtest"}'],
    '{\"type\":\"addr\",\"address\":\"ert1q0jnggjwnn22a4ywxc2pcw86c0d6tghqkgk3hlryrxl7nmxkylmnq3j0gqq\",\"lockingScript\":\"00207ca68449d39a95da91c6c283871f587b74b45c1645a37f8c8337fd3d9ac4fee6\",\"hashType\":\"p2wsh\"}'
  ),
];

const errorCase = [
  TestHelper.createBitcoinTestCase(
    'ParseDescriptor Error(network is invalid)',
    ParseDescriptor,
    ['{"isElements":false,"descriptor":"pkh(02c6047f9441ed7d6d3045406e95c07cd85c778e4b8cef3ca7abac09b95c709ee5)","network":"mainnetttt"}'],
    '{"error":{"code":1,"type":"illegal_argument","message":"Invalid network_type passed. network_type must be \\"mainnet\\" or \\"testnet\\" or \\"regtest\\"."}}'
  ),
  TestHelper.createBitcoinTestCase(
    'ParseDescriptor Error(descriptor is invalid)',
    ParseDescriptor,
    ['{"isElements":false,"descriptor":"pkdh(02c6047f9441ed7d6d3045406e95c07cd85c778e4b8cef3ca7abac09b95c709ee5)","network":"mainnet"}'],
    '{\"error\":{\"code\":1,\"type\":\"illegal_argument\",\"message\":\"Failed to unknown name.\"}}'
  ),
  TestHelper.createBitcoinTestCase(
    'ParseDescriptor Error(addr prefix is invalid)',
    ParseDescriptor,
    ['{"isElements":false,"descriptor":"addr(ert1q0jnggjwnn22a4ywxc2pcw86c0d6tghqkgk3hlryrxl7nmxkylmnq3j0gqq)","network":"regtest"}'],
    '{\"error\":{\"code\":1,\"type\":\"illegal_argument\",\"message\":\"Base58 decode error.\"}}'
  ),
  TestHelper.createBitcoinTestCase(
    'ParseDescriptor Error(addr network is unmatch)',
    ParseDescriptor,
    ['{"isElements":false,"descriptor":"addr(bc1qrp33g0q5c5txsp9arysrx4k6zdkfs4nce4xj0gdcccefvpysxf3qccfmv3)","network":"testnet"}'],
    '{\"error\":{\"code\":1,\"type\":\"illegal_argument\",\"message\":\"unmatch address nettype.\"}}'
  ),
  TestHelper.createBitcoinTestCase(
    'ParseDescriptor Error(descriptor is illegal(wsh in wsh))',
    ParseDescriptor,
    ['{"isElements":false,"descriptor":"wsh(wsh(pkh(02c6047f9441ed7d6d3045406e95c07cd85c778e4b8cef3ca7abac09b95c709ee5)))","network":"mainnet"}'],
    '{\"error\":{\"code\":1,\"type\":\"illegal_argument\",\"message\":\"Failed to wsh parent. only top or sh.\"}}'
  ),
  TestHelper.createBitcoinTestCase(
    'ParseDescriptor Error(descriptor is illegal(wsh in wpkh))',
    ParseDescriptor,
    ['{"isElements":false,"descriptor":"wpkh(wsh(pkh(02c6047f9441ed7d6d3045406e95c07cd85c778e4b8cef3ca7abac09b95c709ee5)))","network":"mainnet"}'],
    '{\"error\":{\"code\":1,\"type\":\"illegal_argument\",\"message\":\"Failed to child type. child is key only.\"}}'
  ),
  TestHelper.createBitcoinTestCase(
    'ParseDescriptor Error(descriptor is illegal(wpkh in wsh))',
    ParseDescriptor,
    ['{"isElements":false,"descriptor":"wsh(wpkh(pkh(02c6047f9441ed7d6d3045406e95c07cd85c778e4b8cef3ca7abac09b95c709ee5)))","network":"mainnet"}'],
    '{\"error\":{\"code\":1,\"type\":\"illegal_argument\",\"message\":\"Failed to wpkh parent. cannot wsh.\"}}'
  ),
  TestHelper.createBitcoinTestCase(
    'ParseDescriptor Error(descriptor is illegal(sh position fail))',
    ParseDescriptor,
    ['{"isElements":false,"descriptor":"wsh(sh(pkh(02c6047f9441ed7d6d3045406e95c07cd85c778e4b8cef3ca7abac09b95c709ee5)))","network":"mainnet"}'],
    '{\"error\":{\"code\":1,\"type\":\"illegal_argument\",\"message\":\"Failed to depth is not zero.\"}}'
  ),
  // ---Elements----
  TestHelper.createElementsTestCase(
    'ParseDescriptor Error(network is invalid)',
    ParseDescriptor,
    ['{"isElements":true,"descriptor":"pkh(02054feb47f9c5142beb9ec06cb7c7d2e2a1be1f58e1fba3aa32ad6c2bbc53f6ce)","network":"liquidv0"}'],
    '{"error":{"code":1,"type":"illegal_argument","message":"Invalid elements_network_type passed. elements_network_type must be \\"liquidv1\\" or \\"regtest\\"."}}'
  ),
  TestHelper.createElementsTestCase(
    'ParseDescriptor Error(addr prefix is invalid)',
    ParseDescriptor,
    ['{"isElements":true,"descriptor":"addr(ert1q0jnggjwnn22a4ywxc2pcw86c0d6tghqkgk3hlryrxl7nmxkylmnq3j0gqq)","network":"liquidv1"}'],
    '{\"error\":{\"code\":1,\"type\":\"illegal_argument\",\"message\":\"unmatch address nettype.\"}}'
  ),
];

TestHelper.doTest('ParseDescriptor', testCase);
TestHelper.doTest('ParseDescriptor ErrorCase', errorCase);
