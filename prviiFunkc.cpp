 
#include <iostream>

using namespace std;
//Milan Milivojevic pripremio zadatak
///////////////////////////////////

 void ispisi(int k) 
{
        int i=0;
 	while(i<k)
	 {
	   cout<<"* ";
 	   ++i;
      }
}
///Funkciji prosledjujemo jedan parametar tj. vrednost (10) koju preuzima  prpmenljiva k
//i ke lokalna promenljiva zato sto je nije potrebno proslediti funkciji
////////////////////////
 int main()
 {
 	int f=10;
        ispisi(f) ;
 	return 0;
 	
}
	 // testirati promeniti podatke 
	 //postaviti pitanja ako nesto nije jasno
	 //objasniti za i=0, k=-2; i=0, k=-2;
	 //dobiti isti rezultat koriscenjem a)i--;b)k--
