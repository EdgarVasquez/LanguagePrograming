print_endline("Ingresar un numero");
Readline.readline(inp => {
  let x = 8 + Belt.Float.toInt(Js.Float.fromString(inp));
  Js.log(x);
  Readline.close();
});
