
#include <string>
#include <iostream>
#include <conio.h>
#include <cmath>

int main()
{
    int a,suma;
    std::cout << "Sumiasta 100" << std::endl << "Czyli suma liczb do 100, ale nieparzystych" <<std::endl;
    a=0;
    suma=0;
    do
    {
        if (a%2==1)
        {
            suma=suma+a;
        }
        a++;
    } while (a <= 100);


    std::cout << "Suma liczb nieparzystych w przedziale <0,100> jest rowna " << suma << std::endl;
    getch();
}

