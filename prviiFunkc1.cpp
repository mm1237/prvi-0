 
#include <iostream>
#include <fstream>
#include <string>
#include <iostream>
using namespace std;
//Milan Milivojevic pripremio zadatak
///////////////////////////////////

 void ispisi(int k) 
{   int i=0;
  	while(i<k)
	 {
	   cout<<"* ";
 	   ++i;
      }
}
///funkcije je potreban jedan parametar koliko ce zvezdica ispisati. 
///Promenljiva mora biti lokalna jer nije neophodno proslediti interfejsu funkcije (int k)  
////////////////////////
void raspored(int k) 
{ int r=0;
  	while(r<k)
 	{++r;
 	ispisi(k)	;
    cout<<endl; 
     }
}
/// Ovoj funkciji prosledjujemo koliko redova je potrebno ispisati
/////tako da ona poziva funkciju  ispisi i prosledjuje joj koliko zvezdica  je potrebno ispisati
////
 int main()
 {
 	int p=0,f=10;
    raspored(f);
 	return 0;
 	
}
	 // testirati promeniti podatke 
	 //postaviti pitanja ako nesto nije jasno
	 //prepraviti ****
	 ///          ***
	 //           **
	 //           *
