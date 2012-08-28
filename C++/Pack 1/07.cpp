
#include <string>
#include <iostream>
#include <conio.h>
#include <cmath>

int main()
{
    float A,B,C,n;
    bool err=false;
    int v;
        std::cout << "Zabawy z trojkatem!! :)" << std::endl;
        std::cout << "Wprowadz boki A, B oraz C" << std::endl;
        std::cout << "A: ";
        std::cin >> A;
        if (A<=0) {err=true;}
        else{
        std::cout << "B: ";
        std::cin >> B;
        if (B<=0) {err=true;}
        else{
        std::cout << "C: ";
        std::cin >> C;
        if (C<=0) {err=true;}
        } }

        if (err==true) {std::cout << "Error #1: Zle podane liczby (musza byc wieksze od zera)";}
        else {
            //Sortowanie, by C>B>A
            if (A>C) {n=C; C=A; A=n;}
            if (A>B) {n=B; B=A; A=n;}
            if (B>C) {n=C; C=B; B=n;}



        std::cout << "A zatem trojkat o bokach "<< C << ", " << B << " i "<< A << std::endl;


        if (C*C==(A*A)+(B*B))
        {
            std::cout << "Trojkat prostokatny" << std::endl << "To co... policzmy cos!" << std::endl;
            float sin,cos,tan;
            sin= (A/C);
            cos= (B/C);
            tan= (A/B);
            std::cout << "Sinus Alfa = " << sin << std::endl << "Cosinus Alfa = " << cos << std::endl << "Tangens Alfa = " << tan;


        }
        else
        {
            std::cout << "To nie jest trojkat prostokatny";
        }



        }
        getch();
}

