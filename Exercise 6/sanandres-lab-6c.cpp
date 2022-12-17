#include<iostream>
using namespace std;
string alpha_flip ( char CH);

int main()
{
	int N,t;
	char c;
	string rend;
	string lend;
	cin >> N;
	if (1 <= N && N <= 100)
		{
			for ( int i = 0; i < N; i++)
			{
			cin >> t;
			if (1 <= t && t <= 100)
				{
					for ( int j = 0; j <t; j++)
						{
							cin >> c;
							rend = alpha_flip(c);
							lend+= rend;
						}
						lend+= "\n";
					}
					}
						cout << lend;
					}
					return 0;
					}
string alpha_flip ( char CH)
{
	string another;
	if(isupper(CH))
	   {
	   		another+=tolower(CH);
	   	}
	   	else if(islower(CH))
	   		{
	   			another+=toupper(CH);
	   		}
	   		else 
	   		{
	   			another+= " *bug here*!";
	   		}
	   		return another;
	   }
						
						
						
						
						
						
						
					
