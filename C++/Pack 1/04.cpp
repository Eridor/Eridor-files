
#include <string>
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void prostokat ()
{
 std::cout << "Witaj w funkcji obliczania pola prostokata." << std::endl << " Wprowadz dlugosci bokow A i B" << std::endl;
 float A,B,Wynik;
 bool koniec = false;
 std::cout << "Bok A: ";
 std::cin >> A;
 if (A<=0) koniec=true;
 std::cout << "Bok B: ";
 std::cin >> B;
 if (B<=0) koniec=true;
  if (koniec==true) {std::cout << "Error 2: Wartosc musi byc dodatnia!"; }
 else
 {
    Wynik=A*B;
    std::cout << "Pole prostokata wynosi:   " << Wynik << std::endl << std::endl << "Koniec funkcji";
 }
}


void trapez ()
{
 std::cout << "Witaj w funkcji obliczania pola trapezu." << std::endl << " Wprowadz dlugosci bokow A i B oraz wysokosci H trapezu" << std::endl;
 float A,B,H,Wynik;
 bool koniec = false;
 std::cout << "Bok A: ";
 std::cin >> A;
 if (A<=0) koniec=true;
 std::cout << "Bok B: ";
 std::cin >> B;
 if (B<=0) koniec=true;
 std::cout << "Wysokosc H: ";
 std::cin >> H;
 if (H<=0) koniec=true;
 if (koniec==true) {std::cout << "Error 2: Wartosc musi byc dodatnia!"; }
 else
 {
    Wynik=(A+B)*H/2;
    std::cout << "Pole trapezu wynosi:   " << Wynik << std::endl << std::endl << "Koniec funkcji";
 }
}

void kula ()
{
 std::cout << "Witaj w funkcji obliczania objetosci kuli." << std::endl << " Wprowadz dlugosc promienia r kuli" << std::endl;
 float R,Wynik;
 bool koniec = false;
 std::cout << "Promien R: ";
 std::cin >> R;
 if (R<=0) koniec=true;
 if (koniec==true) {std::cout << "Error 2: Wartosc musi byc dodatnia!"; }
 else
 {
     Wynik= 0.75*R*R*R;
    std::cout << "Objetosc kuli wynosi:   " << Wynik << "*PI, czyli okolo " << Wynik*3.14 << std::endl << std::endl << "Koniec funkcji";
 }
}

void stozek ()
{
 std::cout << "Witaj w funkcji obliczania objetosci stozka." << std::endl << " Wprowadz dlugosc promienia r podstawy, oraz wysokosc h stozka" << std::endl;
 float R,H,Wynik;
 bool koniec = false;
 std::cout << "Promien R: ";
 std::cin >> R;
 if (R<=0) koniec=true;
 std::cout << "Wyskosc H: ";
 std::cin >> H;
 if (H<=0) koniec=true;
 if (koniec==true) {std::cout << "Error 2: Wartosc musi byc dodatnia!"; }
 else
 {
     Wynik= R*R*H*(1.0/3.0);
    std::cout << "Objetosc stozka wynosi:   " << Wynik << "*PI, czyli okolo " << Wynik*3.14 << std::endl << std::endl << "Koniec funkcji";
 }
}



int main()
{

        system("cls");
        int wybor;

        std::cout << "Obliczenie pol/objetosci figur" << std::endl;
        std::cout << "Wybierz co chcesz obliczyc wpisujac cyferke: " << std::endl;
        std::cout << "1 - pole prostokata" << std::endl;
        std::cout << "2 - pole trapezu" << std::endl;
        std::cout << "3 - objetosc kuli" << std::endl;
        std::cout << "4 - objetosc stozka" << std::endl;
        std::cout << "0 - wyjscie" << std::endl;

        std::cin >> wybor;
        std::cout << std::endl;
        switch (wybor)
        {
            case 1: prostokat(); break;
            case 2: trapez(); break;
            case 3: kula (); break;
            case 4: stozek (); break;
            case 0: std::cout << "Trudno. Dobranoc" << std::endl; break;
            default: std::cout << "Error #1: Zly wybor funkcji" << std::endl; break;

        }
        getch();

        std::cout << std::endl << std::endl;


   return 0;
}

