const wordlist_en = require('./bip39/wordlist_en.json');
const wordlist_es = require('./bip39/wordlist_es.json');
const wordlist_fr = require('./bip39/wordlist_fr.json');
const wordlist_it = require('./bip39/wordlist_it.json');
const wordlist_jp = require('./bip39/wordlist_jp.json');
const wordlist_zhs = require('./bip39/wordlist_zhs.json');
const wordlist_zht = require('./bip39/wordlist_zht.json');
/**
 * wordlist一覧の連想配列
 * @type {Object}
 */
const wordlists = {
  'en': wordlist_en,
  'es': wordlist_es,
  'fr': wordlist_fr,
  'it': wordlist_it,
  'jp': wordlist_jp,
  'zhs': wordlist_zhs,
  'zht': wordlist_zht,
}

class Bip39DataSource {

  /**
   * wordlistを取得する.
   * @param {string} lang 取得するwordlistの言語
   * @return {Array.<string>} 指定言語の wordlist 配列
   * @throws langで指定された言語がサポートされていない場合
   */
  static GetWordlist(lang) {
    const support_langs = Object.keys(wordlists);
    if (!support_langs.includes(lang)) {
      throw Error(`${lang} is not supported`);
    }

    return wordlists[lang];
  }
}

module.exports = Bip39DataSource;