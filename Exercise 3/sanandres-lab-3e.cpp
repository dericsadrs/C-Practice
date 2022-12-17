#include <iostream>

using namespace std;

int main()
{
	int M,B,N,n,i = 1;
	char transac;


	cin >> M;
	cin >> B;
	cin >> N;
	while(N >= i)
	{
		i++;
		cin >> transac;
		if (transac == 'D')
		{	
			cin >> n;
			B = B+n;
		}
		else if (transac == 'W')
		{
			cin >> n;
			if(B < n)
			{
				cout << "Cannot Withdraw" << endl;
			}
			else
			{
				B = B-n;
			}
		}
		cout << B << endl;
	}
	
return 0;
}
