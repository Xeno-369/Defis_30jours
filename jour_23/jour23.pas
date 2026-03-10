program CaesarSimple;

var
    word, cipher_word: string;
    key, i: integer;

begin
    writeln('======= Caesar cipher =======');
    write('Entrez le mot a chiffrer : ');
    readln(word);

    write('Entrez la clé de chiffrement (0-26) : ');
    readln(key);

    cipher_word := word;

    for i := 1 to length(word) do
    begin
        { Gestion des Majuscules }
        if (word[i] >= 'A') and (word[i] <= 'Z') then
            cipher_word[i] := chr((ord(word[i]) - ord('A') + key) mod 26 + ord('A'))
        
        { Gestion des Minuscules }
        else if (word[i] >= 'a') and (word[i] <= 'z') then
            cipher_word[i] := chr((ord(word[i]) - ord('a') + key) mod 26 + ord('a'))
            
        { Pour tout le reste (espaces, ponctuations, chiffres), on garde tel quel }
        else
            cipher_word[i] := word[i];
    end;

    writeln('Resultat : ', cipher_word);
    write('Appuyez sur Entrée pour quitter...');
    readln;
end.