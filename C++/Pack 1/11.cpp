
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
            if (i%2==0)
            {
                if (i%3==0)
                {
                    std::cout << i << " ";
                }
            }

           i++;
        } while (i <= 99);
    getch();
       return 0;
}

