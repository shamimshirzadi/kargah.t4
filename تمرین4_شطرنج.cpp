#include<math.h>
#include <iostream>
#include<conio.h>


using namespace std;

int main()
{
	
    int n, m ;
	cout << "vared kon tool ra:";
	cin >> n ;
    cout << "vared kon arz ra :";
    cin >> m ;
	
    for (int i = 0 ; i < n ; i++)
	{
		for (int j = 0; j <m ; j++)
		{
			
            if (j % 2 == 0)
				cout << "*";
			
            else
				cout << "#";
		}
		
	}
	return 0;
}