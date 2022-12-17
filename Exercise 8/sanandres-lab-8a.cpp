#include<iostream>
using namespace std;
 int main()
{
	string s1;
	string s2;
	string rend;
	int N;
	cin >> N;
	if ( 1 <= N && N <= 100)
	{
	for (int i = 0; i < N; i++)
	   {
		
		cin >> s1 >> s2;
		s1[0] = toupper(s1[0]);
		s2[0] = toupper(s2[0]);
		rend = rend + s1[0] + "." + s2[0] + "." + "\n";
		}
		cout <<rend;
}

		
return 0;
   
}
