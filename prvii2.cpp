 
#include <iostream>
#include <fstream>
#include <string>
//Milan Milivojevic pripremio zadatak
using namespace std;
 int main()
 {
 	int i=0;
 	int k=10;
 	int r=0,s=0;
 	while(r<k)
 	{
 		++r;
	    if(r%2==0)
     	   {
     	   	s=0;
     	   	while(s<r)
		    {
	        cout<<" ";
 	        ++s;
     	    }
     	   }
	    
 	    while(i<k)
		    {
	        cout<<"* ";
 	        ++i;
     	    }
    	
			
     	   
    i=0; 	 
    cout<<endl; 
     }
 	return 0;
 	
	 }
	 // testirati promeniti podatke 
	 //postaviti pitanja ako nesto nije jasno
	 //objasniti za i=5;r=5
	 
