program MenuComplet;
uses math, crt;

var
  choix: integer;
  n, m, ack_n: longint;
  c, x, y: real;

{ --- Les fonctions --- }

procedure f2(n: integer);
var i: integer;
begin
  if n >= 0 then
    for i := 1 to n do writeln('bonjour');
end;

function CelsiusToFahrenheit(c: real): real;
begin
  CelsiusToFahrenheit := c * 1.8 + 32;
end;

function Ackermann(m, n: longint): longint;
begin
  if (m < 0) or (n < 0) then Ackermann := -1
  else if m = 0 then Ackermann := n + 1
  else if n = 0 then Ackermann := Ackermann(m - 1, 1)
  else Ackermann := Ackermann(m - 1, Ackermann(m, n - 1));
end;

{ --- Programme Principal --- }

begin
  repeat
    writeln;
    writeln('========== MENU PRINCIPAL (Pascal) ==========');
    writeln('1. Afficher ''Bonjour'' N fois');
    writeln('2. Celsius -> Fahrenheit');
    writeln('3. Puissance (x^y)');
    writeln('4. Fonction d''Ackermann');
    writeln('0. Quitter');
    write('Votre choix : ');
    readln(choix);

    case choix of
      1: begin
           write('Nombre de répétitions : '); readln(n);
           f2(n);
         end;
      2: begin
           write('Celsius : '); readln(c);
           writeln('=> ', c:0:2, ' C = ', CelsiusToFahrenheit(c):0:2, ' F');
         end;
      3: begin
           write('Base x : '); readln(x);
           write('Exposant y : '); readln(y);
           writeln('=> Résultat : ', power(x, y):0:2);
         end;
      4: begin
           write('m : '); readln(m);
           write('n : '); readln(ack_n);
           writeln('=> A = ', Ackermann(m, ack_n));
         end;
      0: writeln('Au revoir !');
    else
      writeln('Option invalide.');
    end;
  until choix = 0;
end.