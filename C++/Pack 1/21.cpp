// First - pierwszy program w C++
#include <string>
#include <iostream>
#include <conio.h>
#include <cmath>
#include <windows.h>

int main()
{
    std::cout << "Liczby pierwsza" << std::endl;
    int liczba,i,j;
    std::cout << "Wprowadz liczbe: ";
    std::cin >> liczba;
    i=1;
    j=0;
    do
    {
        if (liczba%i==0)
        {
            j++;
        }
        i++;
    } while (i<=liczba);

        HANDLE hConsole;
        hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    if (j==2)
    {
        SetConsoleTextAttribute(hConsole, 2);
        std::cout << "Tak, to jest liczba pierwsza";
    }
    else
    {
        SetConsoleTextAttribute(hConsole, 4);
        std::cout <<"Nie, to nie jest liczba pierwsza";
    }
        SetConsoleTextAttribute(hConsole, 15);
    getch();
}

