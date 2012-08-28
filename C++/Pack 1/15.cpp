
#include <string>
#include <iostream>
#include <conio.h>
#include <cmath>

int main()
{
    int x,y;
    y=1;
    x=1;
    std::cout << "Tabliczka mnozenia" << std::endl;

    do
    {
        do
        {
            std::cout << x*y << " ";
            if (x*y<10) {std::cout << " ";}
            x++;
        } while (x <= 10);
        std::cout << std::endl << std::endl;
        y++;
        x=1;
    } while (y <= 10);

    std::cout << std::endl;
    getch();
       return 0;
}

