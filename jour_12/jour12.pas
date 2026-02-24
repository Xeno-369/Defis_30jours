program calcu_multiplicaion;
var 
    number : integer;
    i : integer;
begin 
    write('VOus voulez la table de multiplicaion de quel nombre ? : ');
    readln(number);
    writeln('========== table de multiplication de ',number,' ==========');
    for i := 1 to 10 do 
    begin  
        writeln(number,' x ',i,' = ',number*i);
    end;
end.
