program ConvertisseurTempsPro;

var
  temps_s, reste: LongInt;
  j, h, m, s: Integer;

begin
    repeat
        write('Entrez la valeur du temps en secondes :');
        readln(temps_s);
    if (IOResult <> 0) or (temps_s < 0) then
        begin
            writeln('Erreur : veuillez entrer un nombre entier positif.');
            temps_s := -1; 
        end;
    until temps_s >= 0;  
    j := temps_s div 86400;     
    reste := temps_s mod 86400; 

    h := reste div 3600;        
    reste := reste mod 3600;    

    m := reste div 60;          
    s := reste mod 60;          
    writeln;
    writeln(j, ' j ', h, ' h ', m, ' min ', s, ' s');
    writeln('Appuyez sur Entree pour quitter...');
    readln;
end.