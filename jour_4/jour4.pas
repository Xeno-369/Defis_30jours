program ProgramName;
var 
    a, b, temp : integer;
begin
  write('Entrez la valeur a : ');
  readln(a);
  write('Entrez la valeur b : ');
  readln(b);
  temp := a;
  a := b;
  b := temp;
  writeln('la valeur de a est : ', a);
  write('la valeur de b est : ', b);
  //Autre methode
  //a = a^b
  //b = a^b 
  //a = a^b
  //writeln('la valeur de a est : ', a);
  //write('la valeur de b est : ', b);*/
end.