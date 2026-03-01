program sum_calcul;
var 
    i,somme,number : integer;
begin
    write('Entrez la valeur : ');
    readln(number);
    somme := 0;
    for i:= 0 to number do
        begin 
            somme := somme + i;
        end;
    write('La somme des entiers inferieurs ou égales a ',number,' est : ',somme);
end.