#include <iostream>
using namespace std;
int main()
{
	float q,t;
	float ps[5];
	float sum = 0;
	string rend;
	for (int i = 0; i < 2; i++)
	     {
		cin >> q;
		for (int l = 0; l < 5; l++)
		{
		cin >> ps[l];
		sum+=ps[l];
		}
		cin >> t;
		if ( sum <= q)
		{
		 	rend = rend + "You need to sell more!" + "\n";
		}
		else if ( sum >= q && t >= q)
		{
			rend = rend + " Quota has been met!" + "\n";
		}
		else if (( sum > q) && ( sum < q*2))
		{
			rend = rend + "Great Job" + "\n";
		}
		else if (sum >= q*2 && t >= q*2)
		{
			rend = rend + "You're such a pro!" + "\n";
		}
		}
		cout << rend;
		return 0;
		}
		

