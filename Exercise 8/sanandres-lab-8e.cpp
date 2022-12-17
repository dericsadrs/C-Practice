#include <iostream>

using namespace std;

int main()
{
	char decrypt[100][100];	
	int j;
	string comb;
	int columnCounter = 0;

	for(int i = 0; i < 6; i++)
	{
		for(int j = 0; j < 5; j++)
		{
			cin >> decrypt[i][j];
		}
	}	
	
	for(int i = 0; i < 10; i++)
	{
		for(j = 0; j < 10; j++)
		{
			comb += decrypt[j][i];
			if(isalpha(decrypt[j][i]))
				continue;
			else
				break;

		}
		j=0;
	}	
	cout << comb;
	
	
return 0;
