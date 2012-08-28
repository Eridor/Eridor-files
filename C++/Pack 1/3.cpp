// First - pierwszy program w C++
#include <string>
#include <iostream>
#include <conio.h>

int main()
{
    float A,B;
   std::cout << "Iloraz dwoch liczb" << std::endl;
   std::cout << "Wprowadz liczbe A: ";
   std::cin >> A;

   std::cout << "Wprowadz liczbe B: ";
   std::cin >> B;
   if (B==0)
   {
       std::cout << "EJ!!! Nie dziel przez zero ty jedna ********";
   }
   else
   {
    float Wynik = A / B;
    if (Wynik == 0) {Wynik=0;}
   std::cout << A << "/" << B << "=" << Wynik << std::endl << std::endl;
   std::cout << "Odpowiedzia na twe wszystkie pytania jest zatem liczba " << Wynik << "!";

   Wynik;
   }
   getch();

}
