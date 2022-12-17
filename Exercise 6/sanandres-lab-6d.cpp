#include <iostream>
using namespace std;
int main()
{
	int N, T, a,b;
	char c;
	cin >> N;
	cin >> T;
	string rend;
	int arf[N];
	int meow[T];
	
	if ( 0 < N && N < 100 && 0 < T && T < 100)
		{
			for (int i = 0; i < N; i++)
				{
					cin >> arf[i];
				}
				for ( int i = 0; i < T; i++)
					{
					   cin >> a >> b >> c;
					
				if ( b > a  && c != '+' || c != '-' || c != '*')
					{
						rend = rend + " Out of Bounds and Invalid Operator" + "\n";
					} 
				else if ( a >= b || b >=a )
					{
						rend = rend + " Out of Bounds" + "\n";
					}
					else if ( c != '+' || c != '=' || c!= '-')
					{
						 rend = rend + " Invalid Operator!" + "\n";
					}
						else if ( c == '+')
							{
								meow[i] = arf[a-1] + arf[b-1];
								rend = rend + to_string(meow[i]) = "\n";
							}
							else if (c == '-')
							{	
								meow[i] = arf[a-1] -arf[b-1];
								rend = rend + to_string(meow[i]) = "\n";
							}
							else if( c == '*')
							{
									
								meow[i] = arf[a-1]*arf[b-1];
								rend = rend + to_string(meow[i]) = "\n";
								}
									}
									cout << rend << endl;
									}
									return 0;
									}











						

	
