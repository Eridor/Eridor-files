// First - pierwszy program w C++
#include <string>
#include <iostream>
#include <conio.h>

int main()
{
    int Liczba;
   std::cout << "Czy liczba jest dodatnia, ujemna, czy tez jest zerem? Wprowadz liczbe:" << std::endl;
   std::cin >> Liczba;
     if (Liczba==0)
    {
        std::cout << "Liczba jest zerem" << std::endl;
    }
    else
    {
        if (Liczba>0)
        {
            std::cout << "Liczba jest dodatnia" << std::endl;
        }
        else
        {
            std::cout << "Liczba jest ujemna" << std::endl;
        }
    }


   getch();
   return 0;
}
