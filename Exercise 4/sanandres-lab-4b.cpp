#include <iostream>
using namespace std;
int main()
{
	int N;
	int x = 1;
	
	while ( N > 0)
	      {
		cin >> N;
		if (N % 2 == 1)
		   {
			x*=N;
		   }
			
		}
		cout << x;

}
