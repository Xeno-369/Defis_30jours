program GestionEtudiantsJour29;
uses crt;

type
    { La petite boite : La note et sa matière }
    TNote = record
        matiere: string[20];
        valeur: real;
    end;

    { Enregistrement d'etudiant "}
    TEtudiant = record
        nom: string[50];
        filiere: string[30];
        notes: array[1..3] of TNote; { Tableau imbriqué }
        moyenne: real;
        statut: string[10];
    end;

var
    classe: array[1..100] of TEtudiant;
    nbEtudiants, i, j, choix: integer;
    somme: real;
    matieres: array[1..3] of string[10] = ('Maths', 'Algo', 'Anglais');

begin
    nbEtudiants := 0;
    repeat
        clrscr;
        writeln('--- MENU GESTION PASCAL (JOUR 29) ---');
        writeln('1. Ajouter un etudiant');
        writeln('2. Afficher la liste');
        writeln('3. Quitter');
        write('Choix : ');
        readln(choix);

        if choix = 1 then
        begin
            nbEtudiants := nbEtudiants + 1;
            write('Nom de l''etudiant : ');
            readln(classe[nbEtudiants].nom);
            write('Filiere : ');
            readln(classe[nbEtudiants].filiere);

            somme := 0;
            for j := 1 to 3 do
            begin
                classe[nbEtudiants].notes[j].matiere := matieres[j];
                write('Note en ', matieres[j], ' : ');
                readln(classe[nbEtudiants].notes[j].valeur);
                somme := somme + classe[nbEtudiants].notes[j].valeur;
            end;

            classe[nbEtudiants].moyenne := somme / 3;
            
            if classe[nbEtudiants].moyenne >= 10 then
                classe[nbEtudiants].statut := 'Admis'
            else
                classe[nbEtudiants].statut := 'Ajourne';
            
            writeln('Etudiant ajoute avec succes !');
            readln;
        end
        else if choix = 2 then
        begin
            writeln;
            writeln('NOM':15, ' | ', 'FILIERE':15, ' | ', 'MOYENNE':8, ' | ', 'STATUT');
            writeln('------------------------------------------------------------');
            for i := 1 to nbEtudiants do
            begin
                writeln(classe[i].nom:15, ' | ', classe[i].filiere:15, ' | ', 
                        classe[i].moyenne:8:2, ' | ', classe[i].statut);
            end;
            writeln('Appuyez sur Entree pour revenir au menu...');
            readln;
        end;

    until choix = 3;
end.
