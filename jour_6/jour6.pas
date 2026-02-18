program ProgramName;
var 
    number : integer;
begin
    write('Entrez un nombre entier : ');
    readln(number);
    if (number mod 2 = 0) then
        begin
            write('le nombre est pair');
        end
    else 
        begin
            write('le nombre est impair ');
        end;
end.