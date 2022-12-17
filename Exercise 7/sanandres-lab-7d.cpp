
#include <iostream>
using namespace std;

		int f_Slp(int x1, int x2, int y1, int y2);



		int f_Intrcpt(int x1, int y1, int a);

	int main()

	{
	int x1, x2, y1, y2,slope;
	char ans;
	

	while(ans == 'y' || ans == 'Y')
 		{
 			cout << "Enter first coordinates(x1,y1): ";
 		
						cin >> x1 >> y1;
 			
 			cout << "Enter second coordinates (x2,y2): ";
										cin >> x2 >> y2;
  			cout << "The slope of line going through the point (" << x1 << "," << y1 << ") " << "and the point (" << x2 << "," << y2 << ") is :" << f_Slp(x1, y1, x2, y2) << endl;
 				
 														slope = f_Slp(x1, y1, x2, y2);
 			
	cout << "The y-intercept of the point (1,2): " << f_Intrcpt( x1,y1,f_Slp) << endl;
 			
 									cout<<"Another[y/n]? ";
 							cin>> ans;
 		}

return 0;
}

int f_Slp(int x1, int y1, int x2, int y2)
{
	return ((y2-y1)/(x2-x1));
}

int f_Intrcpt(int x1, int y1, int a)
{
	return (y1 - (a * x1));
}



