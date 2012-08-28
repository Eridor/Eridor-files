
#include <string>
#include <iostream>
#include <conio.h>
#include <cmath>

int main()
{
    std::cout << "Srednia arytmetyczna" << std::endl;
    int liczba,i,nowa,suma;
    std::cout << "Wprowadz pierwsza liczbe: ";
    std::cin >> suma;
    i=1;
    nowa=1;
    do
    {
        std::cout << "Kolejna liczba? 1 - Tak ; 2 - Nie" << std::endl;
        std::cin >> nowa;
        switch (nowa)
        {
            case 1:
            {
                std::cout << "Wprowadz kolejna liczbe: ";
                std::cin >> liczba;
                suma=suma+liczba;
                i++;
                break;
            }
            case 2:
            {
                std::cout << "Srednia artymetyczna z tych " << i << " podanych liczba wynosi " << (suma/i);
                break;
            }
            default:
            {
                std::cout << "Z³a podana liczba. Srednia artymetyczna z dotychczas podanych " << i << " liczba wynosi " << (suma/i);
                break;
            }
        }
    } while (nowa == 1);
    getch();
}

