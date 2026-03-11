program Jour28_Recherche;
type 
    Etudiant = record
        nom : string;
        age : integer;
        note : real;
    end;

var
    tab_etu : array[1..100] of Etudiant;
    nombre_etu, i : integer;
    nom_recherche : string;
    trouve : boolean;

begin
    { 1. Saisie du nombre d'étudiants avec validation }
    repeat
        write('Entrez le nombre d''etudiants (1-100) : ');
        readln(nombre_etu);
        if (nombre_etu <= 0) or (nombre_etu > 100) then
            writeln('Erreur : Saisissez un nombre entre 1 et 100.');
    until (nombre_etu > 0) and (nombre_etu <= 100);

    { 2. Saisie des données des étudiants }
    for i := 1 to nombre_etu do
    begin
        writeln('======= Etudiant N ', i, ' =======');
        write('Nom : '); 
        readln(tab_etu[i].nom);

        { Validation de l'age }
        repeat
            write('Age (14-100) : ');
            readln(tab_etu[i].age);
            if (tab_etu[i].age < 14) or (tab_etu[i].age > 100) then
                writeln('Erreur : L''age doit etre entre 14 et 100.');
        until (tab_etu[i].age >= 14) and (tab_etu[i].age <= 100);

        { Validation de la note }
        repeat
            write('Note (0-20) : ');
            readln(tab_etu[i].note);
            if (tab_etu[i].note < 0) or (tab_etu[i].note > 20) then
                writeln('Erreur : La note doit etre entre 0 et 20.');
        until (tab_etu[i].note >= 0) and (tab_etu[i].note <= 20);
    end;

    { 3. Recherche de l'étudiant }
    writeln;
    write('Quel est le nom de l''etudiant que vous cherchez ? : ');
    readln(nom_recherche);
    trouve := false;
    for i := 1 to nombre_etu do
    begin
        if tab_etu[i].nom = nom_recherche then
        begin
            writeln;
            writeln('Etudiant trouve !');
            writeln('   Nom   : ', tab_etu[i].nom);
            writeln('   Age   : ', tab_etu[i].age, ' ans');
            writeln('   Note  : ', tab_etu[i].note:0:2, '/20');
            trouve := true;
            break; 
        end;
    end;

    if not trouve then
        writeln('Aucun etudiant trouve au nom de "', nom_recherche, '".');

    readln; 
end.