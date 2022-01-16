#include<math.h>
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	 int m, adad1, adad2, baghimande ;
	cout<<"vared kon 2 adad: ";
	cin>>adad1 >> adad2 ;
	
	cout<<"\n"<<"kochaktarin mazrab moshtarak "<<adad1 <<','<<adad2 <<" is:";
	m=adad1*adad2 ;
	do{
		baghimande=(adad1 % adad2 );
		adad1 = adad2;
		adad2 =baghimande;
	}
	while(baghimande!=0);
	cout<< m/adad1 ;
	return  0;
}