'use strict';
const path = require('path');
const fs = require('fs');

// check exists
let buildTarget = 'Release'
try {
  fs.statSync(path.resolve(__dirname, './build/Release'))
} catch (err) {
  try {
    fs.statSync(path.resolve(__dirname, './build/Debug'))
    buildTarget = 'Debug'
  } catch (err) {
    throw ReferenceError(`missing cfdjs module. ${err}`)
  }
}

// load cfd-js module
const cfdjs = require(`./build/${buildTarget}/cfd_js`);
if (typeof cfdjs !== "object" || cfdjs === null) {
  throw ReferenceError("Not support typeof cfdjs.")
}

// get all entries from cfd-js
const newEntries = Object.entries(cfdjs).map(([funcName, func]) => {
  const funcHook = function () {
    if (arguments.length > 1) {
      throw Error(`ERROR: Invalid argument passed: func=[${funcName}], args=[${arguments}]`);
    }

    // function call
    let retObj;
    try {
      // stringify all arguments
      const argArr = [...arguments].map(arg =>
        JSON.stringify(arg)
      );

      retObj = JSON.parse(func.apply(this, argArr));
    } catch (err) {
      // JSON convert error
      throw Error(`ERROR: Invalid function call: func=[${funcName}], args=[${argArr}]`);
    }

    // throw error if return object has error field
    if (retObj.error) {
      throw Error(JSON.stringify(retObj.error));
    }
    return retObj;
  }
  return ([funcName, funcHook])
})

module.exports = Object.fromEntries(newEntries);