program palindrome;
var 
    mot : String;
    estpalindrome : boolean;
    taille,i : integer;
begin
    estpalindrome := True;
    write('Entrez un mot : ');
    readln(mot);
    taille := length(mot);
    for (i := 1 to taille div 2 ) do 
    begin 
        if (mot[i] <> mot[taille + 1 - i])then
        begin 
            estpalindrome := False;
        end;
    end;
    if estpalindrome then
    begin 
        write( mot, ' est un palindrome');
    end 
    else
    begin 
        write(mot, ' n''est pas un palindrome');
    end;
    readln();
end.