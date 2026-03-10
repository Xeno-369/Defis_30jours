program GestionEtudiants;

type 
    Etudiants = record  
        nom : string;
        age : integer;
        note : real;
    end;

var
    nombre_etu, i : integer;
    tab_etu : array[1..100] of Etudiants; 

begin 
    repeat 
        write('Entrez le nombre d etudiants : ');
        readln(nombre_etu);
        if nombre_etu <= 0 then
        begin   
            writeln('Entrez un nombre positif');
        end;
    until(nombre_etu > 0);

    { Saisie des data des etudiants }
    for i := 1 to nombre_etu do
    begin
        writeln('======= Etudiant N ', i, ' =======');
        write('Nom : '); readln(tab_etu[i].nom);
        write('Age : '); readln(tab_etu[i].age);
        write('Note : '); readln(tab_etu[i].note);
    end;
end.