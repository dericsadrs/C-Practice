#include <iostream>

using namespace std;

int main()
{
	int ranInt;
	ranInt = 0;
	string comb;
	while (ranInt >= -1000 && ranInt <= 1000)
	{
		cin >> ranInt;
		if(ranInt >= -1000 && ranInt <= 1000)
		{
			if (ranInt % 7 == 0)
			{
			comb = comb + "se7en" + " ";
			}
			else
			{
			comb = comb + to_string(ranInt) + " ";
			}
		}
		else
		{
		cout << "";
		}	
	}

	cout << comb;


return 0;
}
