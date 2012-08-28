program xyz;
uses crt;

var ilosc: byte;
tablica: array[1..100] of integer;
sred: real;
Procedure losowanie;
var n: integer;
    BEGIN
    write ('tablica: ');
       For n:=1 to ilosc do BEGIN
        tablica[n]:=Random(100);
        write (tablica[n], ' ');

        end;
        writeln;

    END;

Procedure sortowanie;
var n: integer;
z:integer;
m:integer;
BEGIN

  For m:=1 to ilosc-1 do BEGIN
    For n:=1 to ilosc-1 do BEGIN
       IF tablica[n]<tablica[n+1]
       then BEGIN
               z:=tablica[n];
               tablica[n]:=tablica[n+1];
               tablica[n+1]:=z;
            END;
    end;
  end;
  write('tablica uporzadkowana: ');
  for n:=1 to ilosc do BEGIN
      write(tablica[n], ' ');

      end;
  writeln;
END;

Procedure max;
var n: integer;
najwieksza: integer;
BEGIN
najwieksza:=tablica[1];
 For n:=1 to ilosc do BEGIN
   IF najwieksza<tablica[n]
   then najwieksza:=tablica[n]
 end;
 write('Najwieksza liczba to: ',najwieksza);
 writeln;
END;

Procedure min;
var n: integer;
najmniejsza: integer;
BEGIN
najmniejsza:=tablica[1];
 FOR n:=1 to ilosc do BEGIN
    IF najmniejsza>tablica[n]
    then najmniejsza:=tablica[n]
 end;
 write('Najmniejsza liczba to: ',najmniejsza);
 writeln;
END;

Procedure srednia;
var n: integer;
suma: integer;
BEGIN
  suma:=0;
  FOR n:=1 to ilosc do BEGIN
  suma:=suma+tablica[n];
  END;
  if ilosc<>0 then sred:=suma/ilosc;
  write('Srednia liczb to: ',sred:4:2);
  write(', a ich suma wynosi ',suma);
  writeln;
END;
Procedure mediana;
var medi: real;
n: integer;

BEGIN
if ilosc mod 2 = 1 then BEGIN
 n:=(ilosc+1) div 2;
 medi:=tablica[n];
END;
if ilosc mod 2 = 0 then BEGIN
n:=ilosc div 2;
   medi:=(tablica[n]+tablica[n+1])/2
 END;

write('Mediana: ',medi:3:1);
writeln;
END;
Procedure dominanta;
var count:array[1..100]of integer;
n: integer;
m: integer;
domi: integer;
BEGIN
 for n:=1 to 100 do BEGIN
  count[n]:=0;
  END;
 for n:=1 to 100 do BEGIN
  for m:=1 to ilosc do BEGIN
   IF n=tablica[m] then count[n]:=count[n]+1;
  END;
 END;
   domi:=0;
 for n:=1 to 100 do BEGIN
  IF domi < count[n] then domi:= count[n];
 END;
 write('Lista dominant [',domi,' liczbowe]: ');
 for n:=1 to 100 do BEGIN
  IF domi=count[n] then write(n,', ');
  END;

writeln;
END;
 Procedure odchylenie;
  var odch: real;
  a: real;
  n: integer;
 BEGIN
  a:=0;
  for n:=1 to ilosc do BEGIN
  a:=a+sqr(tablica[n]-sred);

  END;
  odch:=sqrt(a/ilosc);
 write('Odchylenie: ',odch:5:3);
 writeln;
 END;

BEGIN
    randomize;
    clrscr;
    write ('Ile liczb wylosowac? ');
    readln (ilosc);
    losowanie;
    sortowanie;
    max;
    min;
    srednia;
    mediana;
    dominanta;
    odchylenie;
    writeln;
    write ('nacisnij klawisz by zakonczyc program' );
   readkey;


END.