#include <iostream>
using namespace std;
int main()
{
	int N, M, s, T, a, b;
	char edu;
	cin >> N >> M; // input muna ako nang variable para sa array
	int plan [M]; 	// after nang input ay dineclare ko ang M as array 
	int planb [N][M]; // pagkatapos ay ginamit ko ang 2d array
	if ( 1 <= N && N <= 100 && 1 <= M && M <= 100 ) // constraints 

	{
	
	for (int i = 0; i < N; i++)
	    {
		for ( int j = 0; j < M; j++)
		    {
			cin >> s;
			planb[i][j] = s; // i sisync mo sya sa 2d array 
		    }
	    }
	}
	if ( 1 <= s && s <= 100)
	{	
		cin >> T;
	if ( 1 <= T && T <= 100)
	{
		for (int k = 0; k < T; k++)
		{
	 	cin >> edu >> a >> edu >> b;
		plan[k] = planb[a-1][b-1]; // minus 1 kasi ang array starts with the count of 0

		}
	if ( edu == 'S' || 'Q')
	{
	if ( 1 <= a && a <= N && 1 <= b && b <= M)
	{
		for( int l = 0; l < T; l++)
		   {
		 	cout << plan[l] <<endl;  
		   }
	}
	}
	}
	}
	return 0;
	}



















		
  
























	
