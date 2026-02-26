program factorielle;
var 
    number, fact, i : integer;

begin 
    repeat 
        write('Entrez une valeur : ');
        readln(number);
        if(number < 0) then
        begin   
            writeln('Entrez des nombres positifs');
        end;
    until(number >= 0);
    fact := 1;
    for i := 1 to number do 
    begin   
        fact := fact *i;
    end;
    write(number,'! = ', fact);
end.