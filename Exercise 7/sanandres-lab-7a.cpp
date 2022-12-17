#include <iostream>
using namespace std;

int get_count(int &count);

void print_count(int count);
int main()
{
	int countdown, ans;
	char response = 'y';
	while ( response == 'y')
	{
		get_count(countdown);
		print_count(countdown);
		cout << "Another[y/n]?";
		cin >> response;
	}
	return 0;
	}

	int get_count(int &count)
	{
		cout << " Enter a Number;";
		cin >> count;
		return count;
		}
		void print_count(int count)
		{
			count+=1;
			for ( int i = count; --i;)
			{
				cout << " T minus" << " " <<i <<" " << " and counting" <<endl;
				}
				}
				
