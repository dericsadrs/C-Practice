#include <iostream>
using namespace std;
int my_power( int base , int exponent);

int main()
{
	int x,y;
	int sqrt;
	string rend;
	string lend;
		
		for ( int i = 0; i < 2; i++)
			{
				cin >> x >> y;
				if ( 1 <= x && x <= 10 && 0 <= y && y < 10)
					{
						sqrt = my_power(x,y);
						rend = to_string(sqrt) +"\n";
						lend+= rend;
					}
					else
					{
						break;
					}
					}
						cout << lend;
					return 0;
}
int my_power( int base , int exponent)
{
	int multi = 1;
	int power;
	for( int l = 1; l <= exponent; l++)
		{
			power = multi*=base;
		}
		return power;
		}
			 
	
	
	
	
	
	
	
	
