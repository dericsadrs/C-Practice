#include <iostream>
using namespace std;

int main()
{
	int N,n;
	int counter[5];
	char c;
	string rend;
	char open[7][5] = 	{{'1','A','B','C','D'} ,
				{'2','A','B','C','D'} ,
				{'3','A','B','C','D'} ,
				{'4','A','B','C','D'} ,
				{'5','A','B','C','D'} ,
				{'6','A','B','C','D'} ,
				{'7','A','B','C','D'}};
	cin >> N;
	if(N >= 1 && N <= 100)
	{
	for(int x = 0; x < N; x++) // input to be marked X
	{
		cin >> n >> c;
		if(n >= 1 && n <= 7)
		{
		if(c == 'A' || c == 'B' || c == 'C' || c == 'D')
		{
			if(c == 'A')
				counter[x] = 1;
			else if(c == 'B')
				counter[x] = 2;
			else if(c == 'C')
				counter[x] = 3;
			else if(c == 'D')
				counter[x] = 4;
			if(open[n-1][counter[x]] != 'X')
			{
				open[n-1][counter[x]] = 'X';
				for(int i = 0;i < 7; i++) // for printing
				{
					for(int j = 0; j < 5; j++)
						{
							rend += open[i][j];
							rend += " ";
						}
				rend+= "\n";
				} // for printing
			rend += "\n";
			} // if(open[n-1][counter[x]] != 'X')
			else
				rend += "Sorry, not available!\n";
		} // constraints char
		} // constraints n
	}
	} // constraints N

	cout << rend;

return 0;
}
