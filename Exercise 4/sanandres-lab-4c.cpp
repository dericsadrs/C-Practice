#include <iostream>
using namespace std;
int main()
{
	int n;
	char c;
	string rend;
	cin >> n;
	if (2 <= n && n  <= 100)
	   {
		cin >> c;
		for (int i = 0; i < n; i++)
		    {
			for ( int l = 0; l < n; l++)
			    {
			rend+=c;
			}
			rend+="\n";
			}
			cout << rend;
			}
			}
