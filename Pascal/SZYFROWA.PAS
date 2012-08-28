{$A+,B-,D+,E+,F-,G-,I+,L+,N-,O-,P-,Q-,R-,S+,T-,V+,X+,Y+}
{$M 16384,0,655360}
Program Szyfrowanie;

uses crt;
const a='qazwsxedcrfv tgbyhnujmikolp';
var plik: file of char;
znak: char;
x: integer;
n: integer;
k: string[1];
kod: string;
szyfr: text;
plik2: file of char;
BEGIN
clrscr;

write('Podaj przesuniecie: ');
readln(x);
x:= x mod 27;
write('Pobieranie danych z pliku txt............');
assign(plik,'plik.txt');
{$I-}
reset(plik);

if ioresult=0 then BEGIN
{$I+}
writeln('Gotowe!');
writeln;
kod:='';
write('Kod z pliku:      ');
while not eof(plik) do BEGIN
      read(plik,znak);
      write(znak);
      n:=pos(znak,a);
      n:=(n+x) mod 27;
      k:=copy(a,n,1);
      kod:=concat(kod,k);

end;
writeln;
writeln;
write('Zaszyfrowany kod: ');
write(kod);
close(plik);
 writeln;
 writeln;
 write('Zapisuje do pliku........................');
assign(szyfr,'szyfr.txt');
rewrite(szyfr);
write(szyfr,kod);
close(szyfr);
 writeln('Gotowe!');

writeln;
writeln;
writeln(' ###  ####  ##  ##### #   # #### ### ');
writeln(' #  # #    #  #     #  # #  #    #  #');
writeln(' #  # #    #       #    #   #    #  #');
writeln(' #  # ####  ##    #     #   ###  ### ');
writeln(' #  # #       #  #      #   #    # # ');
writeln(' #  # #    #  # #       #   #    #  #');
writeln(' ###  ####  ##  #####   #   #    #   #');
writeln;
write('Podaj przesuniecie: ');
readln(x);
x:=x mod 27;
writeln;
write('Pobieranie zaszyfrowanych danych z pliku....');
assign(plik2,'szyfr.txt');
reset(plik2);
writeln('gotowe!');
writeln;
kod:='';
write('Szyfr z pliku:    ');
while not eof(plik2) do BEGIN
      read(plik2,znak);
      write(znak);
      n:=pos(znak,a);
      n:=(n+(27-x)) mod 27;
      k:=copy(a,n,1);
      kod:=concat(kod,k);

end;
writeln;
writeln;
write('Odszyfrowany kod: ');
write(kod);
close(plik2);

end;
writeln;
writeln;
write('ende');
repeat until keypressed;
END.