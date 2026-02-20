program TrouverLePlusGrand;

var
    a, b, c: integer;

begin
    write('Entrez la premiere valeur : ');
    readln(a);
    write('Entrez la seconde valeur : ');
    readln(b);
    write('Entrez la troisieme valeur : ');
    readln(c);

    if (a > b) and (a > c) then
    writeln('le plus grand est ', a)
    else if (b > a) and (b > c) then
    writeln('le plus grand est ', b)
    else if (c > a) and (c > b) then
    writeln('le plus grand est ', c)
    else if (a = b) and (a = c) then
    writeln(a, ' ', b, ' ', c, ' sont egaux');
    readln; 
end.