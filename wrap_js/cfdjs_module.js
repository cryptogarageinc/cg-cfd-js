'use strict';
const path = require('path');
const fs = require('fs');

// check exists
let buildTarget = 'Release';
try {
  fs.statSync(path.resolve(__dirname, './build/Release'));
} catch (err) {
  try {
    fs.statSync(path.resolve(__dirname, './build/Debug'));
    buildTarget = 'Debug';
  } catch (err) {
    throw new ReferenceError(`missing cfdjs module. ${err}`);
  }
}

// load cfd-js module
const cfdjs = require(`./build/${buildTarget}/cfd_js`);
if (typeof cfdjs !== 'object' || cfdjs === null) {
  throw new ReferenceError('Not support typeof cfdjs.');
}

// get all entries from cfd-js
const newEntries = Object.entries(cfdjs).map(([funcName, func]) => {
  const funcHook = function(...args) {
    if (arguments.length > 1) {
      throw Error('ERROR: Invalid argument passed:' +
        `func=[${funcName}], args=[${args}]`);
    }

    // function call
    let retObj;
    try {
      // stringify all arguments
      const argStr = args.map((arg) =>
        JSON.stringify(arg)
      );

      retObj = JSON.parse(func.apply(newEntries, argStr));
    } catch (err) {
      // JSON convert error
      throw new Error('ERROR: Invalid function call:' +
        ` func=[${funcName}], args=[${argArr}]`);
    }

    // throw error if return object has error field
    if (retObj.error) {
      throw new Error(JSON.stringify(retObj.error));
    }
    return retObj;
  };
  return ([funcName, funcHook]);
});

module.exports = Object.fromEntries(newEntries);
