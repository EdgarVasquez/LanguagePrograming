// Generated by ReScript, PLEASE EDIT WITH CARE
'use strict';

var Readline = require("bs-readline/src/Readline.bs.js");

console.log("Ingresar un numero");

Readline.readline(function (inp) {
      var x = 8 + (Number(inp) | 0) | 0;
      console.log(x);
      return Readline.close(undefined);
    });

/*  Not a pure module */
