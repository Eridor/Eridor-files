// First - pierwszy program w C++
#include <string>
#include <iostream>
#include <conio.h>
#include <cmath>

int main()
{
    int a,suma;
    std::cout << "Sumiasta 100" << std::endl << "Czyli suma liczb do 100, ale parzystych" <<std::endl;
    a=0;
    suma=0;
    do
    {
        if (a%2==0)
        {
            suma=suma+a;
        }
        a++;
    } while (a <= 100);


    std::cout << "Suma liczb parzystych w przedziale <0,100> jest rowna " << suma << std::endl;
    getch();
}

