// First - pierwszy program w C++
#include <string>
#include <iostream>
#include <conio.h>
#include <cmath>

int main()
{
    int n=15,i=1;
        std::cout << "Gwiezdny szlaczek" << std::endl;
        do
        {
            std::cout << "*";
           i++;
        } while (i <= n);
    getch();
}

