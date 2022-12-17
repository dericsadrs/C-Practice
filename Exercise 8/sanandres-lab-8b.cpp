#include <iostream>
using namespace std;

void Words(string& s)
{
	int count = 0;
	for ( int i = 0; i < s.size(); i++){
		if (isupper(s[i])) count++;}
		
			cout << " No. of words Found:" << count;
	
}
int main()
{
	string s;
	char ans = 'y';
	for (;;)
	{
	if ( ans == 'y')
	{
	cout << "Enter sequence to CamelCase:";
	cin >> s;
	Words(s);
	cout << endl;
	cout << "Another[y/n]?" << endl;
	cin >> ans;
	}
	else
	break;
	}
}
