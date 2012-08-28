
#include <string>
#include <iostream>
#include <conio.h>
#include <math.h>

int main()
{
    float A,B,C,delta;
    int v;
        std::cout << "Funkcja kwadratowa" << std::endl;
        std::cout << "y=Ax^2+Bx+C" << std::endl << "Wprowadz A, B oraz C" << std::endl;
        std::cout << "A: ";
        std::cin >> A;
        std::cout << "B: ";
        std::cin >> B;
        std::cout << "C: ";
        std::cin >> C;


        std::cout << std::endl << "Funkcja y=" << A <<"x^2 + " << B << "x + " << C << std::endl;
//Liczymy delte
        delta=(B*B)-(4*A*C);

        if (delta>0)
        {
            v=1;
        }
        else
        {
            if (delta==0)
            {
                v=2;
            }
            else
            {
                v=3;
            }
        }

        switch(v)
        {
            case 1: {
                    float x1,x2;
                    x1=(-B-sqrt(delta))/2*A;
                    x2=(-B+sqrt(delta))/2*A;

                    std::cout << "Rozwiazanie: " << std::endl << "x=" << x1 << " lub x=" << x2 << ".";
                break;
                }
            case 2: {
                    float x;
                    x=(-B)/2*A;

                    std::cout << "Rozwiazanie: " << std::endl << "x=" << x << ".";
                break;
                }
            case 3: {
                    std::cout << "Brak rozwiazan.";
                break;
            }
            default: std::cout << "What the hell?! Error!!!!!!!";
        }

        getch();
}

