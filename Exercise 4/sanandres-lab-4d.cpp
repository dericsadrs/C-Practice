#include <iostream>
using namespace std;
int main()
{
	int n,N;
	char c;
	string rend;
	cin >> N;
	if (1 <= N && N <= 100)
	   {
	for ( int i = 0; i < N; i++)
	{
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
			}
			}
			cout << rend;
			}
			}
