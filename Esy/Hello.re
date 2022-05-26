let writefile = (filepath: string , contents: string) =>{
let outFile = open_out(filepath);
output_string(outFile,contents);
close_out(outFile);};

writefile("C:\\Intel\\Prueba2.txt","Esto es una prueba de IDS347L, Hecha por Edgar Vasquez")