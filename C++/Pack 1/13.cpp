// First - pierwszy program w C++
#include <string>
#include <iostream>
#include <conio.h>
#include <cmath>

int main()
{
    int i,suma;
    suma=0;
    std::cout << "Oczko do 50" << std::endl;
    std::cout << "wpisuj kolejne liczby az ich suma przekroczy 50" << std::endl;

    do
    {
        std::cout << "Dawaj! Teraz jest w sumie " << suma << std::endl;
        std::cin >> i;
        suma=suma+i;
    } while (suma <= 50);

    std::cout << "Udalo sie!!! W puli jest " << suma;
    getch();
}

