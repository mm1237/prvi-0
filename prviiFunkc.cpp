 
#include <iostream>
#include <fstream>
#include <string>
#include <iostream>
using namespace std;
//Milan Milivojevic pripremio zadatak
///////////////////////////////////

 void ispisi(int i, int k) 
{
 
 	while(i<k)
	 {
	   cout<<"* ";
 	   ++i;
      }
}
///Funkciji prosledjujemo dva parametra tj. vrednosti (0,10) na osnovu tih vrednosti se koje
//preuzimaju promenljive i,k na ekranu se ispisuje 10 zvezdica
////////////////////////
 int main()
 {
 	int p=0,f=10;
    ispisi(p, f) ;
 	return 0;
 	
}
	 // testirati promeniti podatke 
	 //postaviti pitanja ako nesto nije jasno
	 //objasniti za i=0, k=-2; i=0, k=-2;
	 //dobiti isti rezultat koriscenjem a)i--;b)k--
