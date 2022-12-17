#include <iostream>

using namespace std;
int main()
{
	int T,count = 0;
	string a,b;
	string out;
	
	cin >> T;
	for(int i = 0; i < T; i++)
	{
		cin >> a;
		cin >> b;
		
		if(a.length() >= b.length())
		{
			size_t found = a.find(b);
			if(found != string::npos)
				out += "YES\n";
			else
				out += "NO\n";
		}
		else
		{
			size_t found = b.find(a);
			if(found != string::npos)
				out += "YES\n";
			else
				out += "NO\n";
			
		}
	}
	cout << out;
	
	
return 0;
}
