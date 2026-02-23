program AffichageSuite;

var
  N, count: integer;

begin
    write('Entrez un entier : ');
    readln(N);

    for count := 1 to N do
    begin
        writeln(count);
    end;
end.