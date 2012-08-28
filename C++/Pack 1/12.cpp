// First - pierwszy program w C++
#include <string>
#include <iostream>
#include <conio.h>
#include <cmath>

int main()
{
    int i;
    std::cout << "Podaj liczbe mniejsza od 100!" << std::endl;
    std::cin >> i;
    if (i>=100)
    {
        std::cout << "EJ! Prosilem o liczbe MNIEJSZA od 100! Foch. Quit.";
    }
    else
    {
        if (i%2==0)
        {
            std::cout << "O! Podales liczbe parzysta! Faaajnieee...";
        }
        else
        {
            std::cout << "Hmm... Liczba nieparzysta.. ";
        }
    }

    getch();
}

