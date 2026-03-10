program GestionEtudiant;

type
    Etudiant = record
        nom: string[50];
        age: integer;
        note: real;
    end;
var
    e1: Etudiant;
begin
    write('Nom de l''étudiant : '); readln(e1.nom);
    write('Âge : '); readln(e1.age);
    write('Note : '); readln(e1.note);
    writeln;
    writeln('L''étudiant ', e1.nom, ' a ', e1.age, ' ans et une note de ', e1.note:0:2, '/20');
end.