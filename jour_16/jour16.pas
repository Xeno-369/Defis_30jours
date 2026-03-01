program TableauSimple;

var
    n, i: integer;
    tab: array[1..100] of string; 

begin
    write('Veuillez saisir la taille du tableau (max 100) : ');
    readln(n);
    while (n <= 0) or (n > 100) do
    begin
        write('Erreur. Veuillez saisir un nombre entre 1 et 100 : ');
        readln(n);
    end;
    writeln;
    for i := 1 to n do
    begin
        write('Saisissez l''element ', i, ' : ');
        readln(tab[i]);
    end;
    writeln;
    writeln('Les elements du tableau sont :');
    for i := 1 to n do
    begin
        writeln('tab[', i, '] = ', tab[i]);
    end;
end.