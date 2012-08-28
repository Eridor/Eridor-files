// First - pierwszy program w C++
#include <string>
#include <iostream>
#include <conio.h>

int main()
{
    int Liczba;
   std::cout << "Czy liczba jest dodatnia? Wprowadz luczbe:" << std::endl;
   std::cin >> Liczba;
   if (Liczba>0)
   {
       std::cout << "Liczba jest dodatnia" << std::endl;
    }
    else
    {
        std::cout << "Liczba NIE jest dodatnia" << std::endl;
    }
   getch();
   return 0;
}
