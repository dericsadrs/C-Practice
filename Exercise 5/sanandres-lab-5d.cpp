#include <iostream>

using namespace std;

int main()
{
	int n,N,i;
	int evenNumber[100];

	do{
		cin >> N;
		if(2 <= N && N <= 100)
		{
			for(i = 0; i < N; i++)
			{
				cin >> n;
				if(-1000 <= n && n <= 1000)
				{
					if(n % 2 == 0)
					{
						evenNumber[i] = n;
					}
					else
					{
						evenNumber[i] = 0;
					}
				}
				else
				{
					break;
				}
			}
			for(int x = i-1; x >= 0; x--)
			{
				if(evenNumber[x] % 2 == 0 && evenNumber[x] != 0)
				{
					cout << evenNumber[x] << " ";
				}
			}
			cout << endl;
		}
	}while((2 <= N && N <= 100) && (-1000 <= n && n <= 1000));

return 0;
}
