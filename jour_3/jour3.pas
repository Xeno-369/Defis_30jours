program ProgramName;
var 
    longueur : integer;
    largeur : integer;
begin
  write('Entrez la largeur : ');
  readln(largeur);
  write('Entrez la longueur : ');
  readln(longueur);
  writeln('le perimetre du rectangle vaut : ', 2*(largeur+longueur));
  writeln('l''aire du rectangle vaut : ',largeur*longueur);

end.