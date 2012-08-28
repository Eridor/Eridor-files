
#include <string>
#include <iostream>
#include <conio.h>
#include <cmath>

int main()
{
    int a;
    bool error;

    std::cout << "Kwadrat" << std::endl << "Podaj bok kwadratu" <<std::endl;


    do
    {
        error=false;
        std::cin >> a;
        if (a<=0) {std::cout << "Error 1. Podaj jeszcze raz wymiar kwadratu" << std::endl; error=true;}
    } while (error == true);


    std::cout << "Pole kwadaratu wynosi " << a*a << std::endl;
    getch();
       return 0;
}

