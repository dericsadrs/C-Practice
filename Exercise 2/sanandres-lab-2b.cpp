#include <iostream>
using namespace std;
int main()
{
	char ch;
	int n, N;
	string rend;
	
	cin >> n;
	if ( 1 <= n && n <= 100)
	{

	for (int i = 0; i < n; i++)
	{
	cin >> N >> ch;
	if ( 1 <= N &&  N <= 100)
	   {
		if ( ch == '*' || ch == '@' || ch == '#')
		   {
			
			for ( int l = 0; l < N; l++)
			     {
				rend+= ch;
				}
				rend+="\n";
				}
				}
				}
				cout <<endl;
				cout << rend;
				}
			return 0;
			}

	
