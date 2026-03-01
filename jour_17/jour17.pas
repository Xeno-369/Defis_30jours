program tab_max_min;
var 
    valMAX, valMIN, n, i : integer;
    tab : array[0..99] of integer; 
begin 
    repeat 
        write('Entrez la taille du tableau (max 100) : ');
        readln(n);
        if (n <= 0) or (n > 100) then
        begin   
            writeln('Entrez un nombre entre 1 et 100');
        end;
    until (n > 0) and (n <= 100);

    writeln('Entrez les valeurs :');
    for i := 0 to n-1 do
    begin 
        write('tab[', i, '] = ');
        readln(tab[i]);
    end;
    valMIN := tab[0];
    for i := 0 to n-1 do 
    begin 
        if (valMIN > tab[i]) then 
        begin 
            valMIN := tab[i];
        end;
    end;
    valMAX := tab[0];
    for i := 0 to n-1 do 
    begin 
        if (valMAX < tab[i]) then
        begin
            valMAX := tab[i];
        end;
    end;
    writeln('La valeur minimale du tableau est : ', valMIN);
    writeln('La valeur maximale du tableau est : ', valMAX);
    readln; 
end.