
#include <string>
#include <iostream>
#include <conio.h>
#include <cmath>

int main()
{
    int i,suma;
    suma=0;
    i=1;
    std::cout << "Liczb parzyste o sumie 20" << std::endl;

    do
    {
        if (i%2==0)
            {
                std::cout << i << " ";
                suma=suma+i;

            }
        i++;
    } while (suma <= 20);

    std::cout << std::endl;
    getch();
       return 0;
}

