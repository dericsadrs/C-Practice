#include <iostream>
using namespace std;
int main ()
{
	int N = 5;
	int n = 5;
	char directions;	
	
	cout << "An Adventure Game" << endl;
	cout << "====================="<< endl;
	cout << " Your location is: " << N << "," << n << endl;
	
	
	while ( directions != 'x')
	{	
	cout << " Select direction to move [n, s, e, w] or press x to exit:"; cin >> directions;
	
			if ( directions == 'n')
			{
				n+=1;
			cout << " Your location is: " << N << "," << n << endl;
			}
			else if ( directions == 's')
			{
				n-=1;
			cout << " Your location is: " << N << "," << n << endl;
			}
			else if ( directions == 'w')
			{
				N+=1;
			cout << " Your location is: " << N << "," << n << endl;
			}
			else if ( directions == 'e')
			{
				N-=1;
				cout << " Your location is: " << N << "," << n << endl;
			}
			
		else if ( directions == 'x')
		{
			cout << "Bye!" <<endl;
			break;
		}
			else 
			{
				cout << "Invalid Direction" << endl;
			}
	}
		return 0;
	}




	
