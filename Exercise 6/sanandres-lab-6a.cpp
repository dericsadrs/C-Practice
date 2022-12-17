
#include <iostream>
using namespace std;
int count_upper ( int DenotingCh, char Chsq);

int main()
{
	int N, t, sum;
	char ch;
	string rend;
	int counter = 0;
	int repeat = 0;
	cin >> N;
	if ( 1 <= N && N <= 100)
		{
	for ( int i = 0; i < N; N--)
		{
			cin >> t;
			if ( 1 <= t && t <= 100)
			{
			    for ( int j = 0; j < t; t--) 
				{
				cin >> ch;
				sum = count_upper(counter,ch); 
// kung ano ang data type sa taas ay dapat ganun din sa int main in order dapat. Nilagay ko ang function call sa sum para ma store ko sya string 
				repeat+= sum; 
				// dinagdag ko ang sum sa variable na repeat 
							}
							}
				rend+= to_string(repeat)+ "\n";
				// nilagay ko na sya string 
				repeat = 0;
				// para mag reset ulit sya for another line nang input 
							}
							}
				cout << rend << endl;
				return 0;
				}
int count_upper ( int DenotingCh, char Chsq)
{
	if(isupper(Chsq))
		{
			DenotingCh+=1; // if ever na may nahanap syang upper case letters ay mag +1 sya 
		}
		return DenotingCh;
 // babalik nya sa int main dun sa function call na count_upper(counter,ch) which is stored in a string
}
								
									
									
									
									
									
		

	
	
	 
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
