program ProgramName;
var 
    a, b, c, moyenne : real;
begin
    writeln('==========calcul de la moyenne et mention==========\n');
    repeat
        write('Entrez la premiére note : ');
        readln(a);
        write('Entrez la deuxiéme valeur : ');
        readln(b);
        write('Entrez la troisiéme valeur : ');
        readln(c);
    until((a >= 0) and (b >= 0) and (c > 0));
    moyenne := (a + b + c )/3;
    if (moyenne < 10) and (moyenne >= 0) then 
    begin 
        writeln('Moyenne : ',moyenne);
        write('Mention : Ajournée.');
    end
    else 
    begin 
        if (moyenne >= 10) and (moyenne < 12) then
        begin
            writeln('Moyenne : ',moyenne);
            write('passable');
        end
        else 
        begin 
            if (moyenne >= 12) and (moyenne < 14) then 
            begin 
                writeln('Moyenne : ',moyenne);
                write('Mention : Assez bien.');
            end
            else 
            begin 
                if (moyenne >= 14) and (moyenne < 16) then 
                begin 
                    writeln('Moyenne : ',moyenne);
                    write('Mention : Bien.');
                end
                else 
                begin 
                    if (moyenne >= 16) and  (moyenne < 19)then  
                    begin
                        writeln('Moyenne : ',moyenne);
                        write('Mention : Trés bien');
                    end
                    else 
                    begin 
                        if (moyenne >= 19) and (moyenne <= 20 ) then
                        begin
                            writeln('Moyenne : ', moyenne);
                            write('Mention : Excellent.')
                        end
                        else 
                           writeln('Note invalide ');
                    end;
                end;
            end;
        end;
    end;
end.
