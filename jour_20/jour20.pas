program SommeMatrice;
var
    matrice: array[0..100, 0..100] of integer;
    n, m, i, j: integer;

begin
    //saisie de la taille de la matrice
    repeat
        write('Entrez le nombre de ligne m de la matrice : ');
        readln(m);
        write('Entrez le nombre de colonnes n de la matrice : ');
        readln(n);
        if (n <= 0) or (m <= 0) then
            writeln('Entrez des nombres positives : ');
    until (n > 0) and (m > 0);

    //saisie des valeurs de la matrice
    for i := 0 to m - 1 do
    begin
        for j := 0 to n - 1 do
        begin
            write('Entrez la valeur de matrice[', i, ',', j, '] : ');
            readln(matrice[i, j]);
        end;
    end;

    //calcul de la somme de chaque ligne
    //initialisation de la derniére colonne qui doit stocker les sommes 
    for i := 0 to m - 1 do
    begin
        matrice[i, n] := 0;
        for j := 0 to n - 1 do
        begin
            matrice[i, n] := matrice[i, n] + matrice[i, j];
        end;
    end;

    //initialisation de la derniére ligne qui doit stocker les sommes
    for j := 0 to n - 1 do
    begin
        matrice[m, j] := 0;
        for i := 0 to m - 1 do
        begin
            matrice[m, j] := matrice[m, j] + matrice[i, j];
        end;
    end;

    // 5. Calcul de la somme totale (en utilisant les sommes de lignes déjà calculées)
    matrice[m, n] := 0;
    for i := 0 to m - 1 do
    begin
        matrice[m, n] := matrice[m, n] + matrice[i, n];
    end;

    // 6. Affichage unique
    writeln('La somme totale des elements de la matrice est : ', matrice[m, n]);
end.