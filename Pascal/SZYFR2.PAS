{$A+,B-,D+,E+,F-,G-,I+,L+,N-,O-,P-,Q-,R-,S+,T-,V+,X+,Y+}
{$M 16384,0,655360}
Program Szyfrowanie;
uses crt;
var
tekst: string;
szyfr,deszyfr: string;
z: byte;
tablica,tablica2: array[1..255] of char;
n,x,y: integer;
BEGIN
clrscr;
writeln;
write('Wprowadz tekst do zaszyfrowania: ');
read(tekst);

z:=length(tekst);
n:=1;
while sqr(n)<z do BEGIN
n:=n+1;
end;
for x:=1 to 225 do BEGIN
    tablica[x]:=' ';
    tablica2[x]:=' ';
end;


writeln('Ilosc liter:   ',z);
writeln('Wartosc boku:  ',n);

for x:=1 to z do tablica[x]:=tekst[x];
writeln;
writeln;
writeln('Wprowadzony tekst w tablicy (pomiedzy ##:');
write('#');
for x:=1 to sqr(n) do write(tablica[x]);
write('#');
writeln;
writeln;
writeln('Tekst zakodowany (pomiedzy @@):');
for x:=1 to n do BEGIN
for y:=1 to n do BEGIN
szyfr:=concat(szyfr,tablica[x+n*(y-1)]);
end;
end;
write('@',szyfr,'@');

writeln;
writeln;
writeln;
writeln;
writeln('Dekodowanie');
writeln('Zakodowany tekst: ',szyfr);
for x:=1 to sqr(n) do tablica2[x]:=szyfr[x];
deszyfr:='';
write('Zapisana tablica: ');
for x:=1 to sqr(n) do write(tablica2[x]);

for x:=1 to n do BEGIN
for y:=1 to n do BEGIN
deszyfr:=concat(deszyfr,tablica2[x+n*(y-1)]);
end;
end;

writeln;
writeln('Zdekodowany tekst (pomiedzy %%):');
writeln('%',deszyfr,'%');
repeat until keypressed;
END.