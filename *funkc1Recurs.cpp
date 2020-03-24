 
#include <iostream>

using namespace std;
//  profesor informatike Milan Milivojevic pripremio zadatak
///////////////////////////////////

 void ispisi(int k) 
{
        if (k>0)
        {
         cout<<"* ";
		 ispisi(k-1);
       

        }
        return ;
}
///rekurzivna funkcija tj. funkcija poziva samu sebe frednos parametra k se menja u svakom pozivu u svakom pozivu
////////////////////////
 int main()
 {
 	int f=5;
        ispisi(f) ;
        
 	return 0;
 	
}
	 // testirati promeniti podatke 
	 //postaviti pitanja ako nesto nije jasno
	 //

