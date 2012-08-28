
#include <string>
#include <iostream>
#include <conio.h>
#include <cmath>

int main()
{
    std::cout << "Alfabet" << std::endl;
 char a;
 a=65;
 do
 {
    std::cout << a;
    a++;
 } while (a <= 90);

 std::cout << std::endl;
a--;
 do
 {

      std::cout << a;
    a--;
 } while (a >=65);
    getch();
       return 0;
}

