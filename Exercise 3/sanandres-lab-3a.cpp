#include <iostream>

using namespace std;

int main()
{
	int N,a,b,i = 1;
	string comb;
	cin >> N;
	if( 1 <= N && N <= 100)
	{
		while ( N >= i )
		{
			N--;
			cin >> a >> b;
			if (1 <= a && a <= 50 && 51 <= b && b <= 100)
			{
				if(a % 2 == 1)
				{
					a += 1;
				}
				if(a % 2 == 0 || b % 2 == 0)
				{
					while(a <= b)
					{
						comb = comb + to_string(a) + " ";
						a += 2;
					}
				comb = comb + "\n";
				}				
			}
		}
	}
	cout << comb;


return 0;
}
