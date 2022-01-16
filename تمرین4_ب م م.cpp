#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main() 
{

	int  max , adad1 , adad2 ;
	
	cout << "vared kon 2 adad ra :"
	cin >> adad1 >> adad 2 ;

	
	if (adad1 > adad2) 
	    max = adad1 ;
	
	else
	    max = adad2 ;

	while (true)
	{
        if (max % adad1 == 0 && max % adad2 == 0) 
		    break;
		
		else   
	      	++max;
	}

	cout << "bozorgtarin maghsomalayhe moshtarak adad1 , adad2 : " << max;
	
	system("pause");
}
