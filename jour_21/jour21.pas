program CompterLettres;
var
  mot: string;
  nb_lettre, i: integer;
begin
  write('Entrez un mot : ');
  readln(mot);
  nb_lettre := 0;
  for i := 1 to length(mot) do
  begin
    if mot[i] <> ' ' then
      nb_lettre := nb_lettre + 1;
  end;
  writeln('Le mot ', mot, ' contient ', nb_lettre, ' lettre');
end.