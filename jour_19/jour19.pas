program buble_sort;
var 
    taille, i, j, temp : integer;
    tab : array of integer;
begin 
    repeat
        write('Veuillez saisir la taille du tableau : ');
        readln(taille);
        if taille <= 0 then
            writeln('Veuillez entrer un nombre positif');
    until taille > 0;

    setlength(tab, taille);
    writeln('Entrez la valeur de : ');
    for i := 0 to taille - 1 do
    begin
        write('tab[', i, '] = ');
        readln(tab[i]);
    end;
    for i:= 0 to taille - 1 do
    begin 
        for j:= 0 to taille - 2 - i do
        begin 
            if tab[j] > tab[j + 1] then
            begin    
                temp := tab[j + 1];
                tab[j + 1] := tab[j];
                tab[j] := temp;
            end;
        end;
    end;
    writeln('le tableau trie : ');
    for i := 0 to taille - 1 do
        writeln('tab[', i, '] = ', tab[i]);
end.