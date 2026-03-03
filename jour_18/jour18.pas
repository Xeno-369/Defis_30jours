program TriSelection;
var
    tab: array of integer;
    taille, i, j, indMin, temp: integer;

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

    for i := 0 to taille - 1 do
    begin
        indMin := i;
        for j := i + 1 to taille - 1 do
        begin
            if tab[j] < tab[indMin] then
                indMin := j;
        end;
        temp := tab[indMin];
        tab[indMin] := tab[i];
        tab[i] := temp;
    end;

    writeln('le tableau trie : ');
    for i := 0 to taille - 1 do
        writeln('tab[', i, '] = ', tab[i]);
end.