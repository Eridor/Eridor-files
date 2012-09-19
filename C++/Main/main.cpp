#include <iostream>
#include <conio.h>

int main()
{
   std::string rok, wydzial, kierunek;
   kierunek = "Informatyka";
   wydzial = "Wydzial Elektryczny";
   rok = "2012";
   std::cout << "Witaj na facebookowej grupie studenckiej" << std::endl;
   std::cout << "Kierunek: " << kierunek << std::endl;
   std::cout << "Rocznik: " << rok << std::endl;
   std::cout << "Wydzia³: " << wydzial << std::endl;
   std::cout << "Zapraszamy na forum: http://infwe.tk" << std::endl;
   getch();
   return 0;
}
