program SuiteFibonacci;
uses crt;
function fibonacci(nb: integer): integer;
begin
    if (nb = 0) then
        fibonacci := 0
    else if (nb = 1) then
        fibonacci := 1
    else
        fibonacci := fibonacci(nb - 1) + fibonacci(nb - 2);
end;

var
    number, i: integer;
begin
    write('Entrez le nombre : ');
    readln(number);
    for i := 0 to number do
    begin
        writeln(fibonacci(i));
    end; 
end.