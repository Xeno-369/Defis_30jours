program puissance;

{ --- Fonction Powers --- }
function powers(x : integer; y : integer) : real;
var 
    produit : real; 
    i : integer;
begin 
    produit := 1; 
    for i := 1 to y do 
    begin 
        produit := produit * x;
    end;
    powers := produit;
end;
var 
    nb1 : integer;
    nb2 : integer;
    results : real;

begin 
    repeat
        write('Entrez la valeur de x (positif) : ');
        readln(nb1);
        write('Entrez la valeur de y (positif ou nul) : ');
        readln(nb2);
        if (nb1 <= 0) or (nb2 < 0) then 
        begin 
            writeln('Erreur : entrez des nombres positifs !');
        end;
    until (nb1 > 0) and (nb2 >= 0); 
    results := powers(nb1, nb2);
    
    writeln('Resultat : ', nb1, ' ^ ', nb2, ' = ', results:0:2);
    writeln('Appuyez sur Entree pour quitter.');
    readln;
end.