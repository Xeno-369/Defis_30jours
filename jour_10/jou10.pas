program ReductionClub;
uses crt, sysutils;

var
  age: integer;
  sexe: char;

begin
  write('Entrez votre âge : ');
  readln(age);
  write('Entrez votre sexe (M/F) : ');
  readln(sexe);
  sexe := upcase(sexe);

  // Conditions combinées 
  if (age >= 18) and (age <= 25) then
    writeln('Résultat : Tarif Jeune Adulte')
  
  else if (age > 60) or ((sexe = 'F') and (age > 55)) then
    writeln('Résultat : Tarif Sénior')
    
  else if (age < 18) then
    writeln('Résultat : Tarif Enfant')
    
  else
    writeln('Résultat : Tarif standard');
end.