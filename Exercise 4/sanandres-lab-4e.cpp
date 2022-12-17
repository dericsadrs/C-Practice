#include <iostream>

using namespace std;

int main()
{
	int N,i;
	string result;
	cin >> N;
	char ch[N] = {};

	for(i = 0; N > i; i++)
	{
		cin >> ch[i];
	}
	for(i = 0; N > i; i++)
	{
		if(ch[i] == 'N')
		{
			result = "Found it";
			break;
		}
		else
		{
			result = "Sorry";
		}
	}
	cout << result;

return 0;	
}

