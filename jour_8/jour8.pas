program VerifBissextile;
var
    annee: Integer;

begin
    write('Entrez l''annee : ');
    readln(annee);
    if ((annee mod 4 = 0) and (annee mod 100 <> 0)) or (annee mod 400 = 0) then
    writeln(annee, ' est une annee bissextile.')
    else
        writeln(annee, ' n''est pas une annee bissextile.');
    
    readln; 
end.