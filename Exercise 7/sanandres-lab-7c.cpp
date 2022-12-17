/* San Andres Deric C
	ZT11
	Exercise 7
	Health Bar
	*/
#include <iostream>
using namespace std;

void damage (string& s, int& p, int n)
{
	p-=n;
	if ( p >= 100)
		{
			s = "[==========]";
			p = 100;
		}
		else if ( p >= 90 && p <= 99)
		{
			 s = "[=========]";
		}
		else if ( p >= 80 && p <= 89)
		{
			s = "[========]";
		}
		else if ( p >= 70 && p <= 79)
		{
			s = "[=======]";
		}
		else if (p >= 60 && p >= 69)
		{
			s = "[======]";
		}
		else if ( p >= 50 && p <= 59)
		{
			s = "[=====]";
		}
		else if ( p >= 40 && p <= 49)
		{
			s = "[====]";
		}
		else if ( p >= 30 && p <= 39)
		{
			s = "[===]";
		}
		else if ( p >= 20 && p <= 29)
		{
			s = "[==]";
		}
		else if ( p >= 1 && p <= 19)
		{
			s = "[=]";
		}
		else
		{
			p = 0;
			s = " [  ]DEAD";
			}
	
		}



void regenerate (string& s, int& p, int n)
{
	p+=n;
	if ( p >= 100)
		{
			s = "[==========]";
			p = 100;
		}
		else if ( p >= 90 && p <= 99)
		{
			 s = "[=========]";
		}
		else if ( p >= 80 && p <= 89)
		{
			s = "[========]";
		}
		else if ( p >= 70 && p <= 79)
		{
			s = "[=======]";
		}
		else if (p >= 60 && p >= 69)
		{
			s = "[======]";
		}
		else if ( p >= 50 && p <= 59)
		{
			s = "[=====]";
		}
		else if ( p >= 40 && p <= 49)
		{
			s = "[====]";
		}
		else if ( p >= 30 && p <= 39)
		{
			s = "[===]";
		}
		else if ( p >= 20 && p <= 29)
		{
			s = "[==]";
		}
		else if ( p >= 1 && p <= 19)
		{
			s = "[=]";
		}
	
		else 
		{
			p = 0;
			s = " [  ]DEAD";
			}
	
		}


	
	
	void display ( string s, int p)
	{
		if ( p >= 1 && p >= 100)
		{
			cout << s << p << "%";
		}
		else
		{
			cout << s;
			}
	}
	int main()
	{
		string s; 
		int p = 100, n;
		char c;
		
		for (int i = 0; i < 5; i++)
			{
				cin >> c >> n;
				if ( n >= 1 && n <= 100)
					{
						if ( c == '+')
							{
								regenerate(s,p,n);
							}
							else if ( c == '-')
							{
								damage(s,p,n);
							}
							else
							{
								break;
							}
							display(s,p);
							cout << endl;

							}
							else
							break;
						
							}						
							return 0;
							}

		
		
		
		
		
		
		
		
		
		
