
#include <string>
#include <iostream>
#include <conio.h>
#include <cmath>

int main()
{
    int i=10;
        std::cout << "Liczymy!" << std::endl;
        do
        {
            std::cout << i << " " << i+1 << " " << i+2 << " " << i+3 << " " << i+4 << std::endl;
           i= i+5;
        } while (i <= 99);
    getch();
}

