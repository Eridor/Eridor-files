
#include <string>
#include <iostream>
#include <conio.h>


int main()
{
    float A,B,C,x;
        std::cout << "Ktora liczba jest najmniejsza?" << std::endl;
        std::cout << "Wprowadz liczby A, B i C" << std::endl;
        std::cout << "Liczba A:" << std::endl;
        std::cin >> A;
        std::cout << "Liczba B:" << std::endl;
        std::cin >> B;
        std::cout << "Liczba C:" << std::endl;
        std::cin >> C;

        x=A;
        if (x>B) {x=B;}
        if (x>C) {x=C;}

        std::cout << "Najmniejsza liczba jest:" << x << std::endl;
        getch();
   return 0;
}

