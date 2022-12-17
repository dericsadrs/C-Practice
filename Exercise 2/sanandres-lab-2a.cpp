#include <iostream>

using namespace std;

int main()
{

	int randomNum; 

	while (randomNum != 1001) // program will terminate if randomNum have the value 1001
	{

	cin >> randomNum; // random integer input
		
	if ((randomNum > 0) && (randomNum < 1001))
	{
		cout << "positive" << endl;
	}	
	else if ((randomNum < 0) && (randomNum > -1000))
	{
		cout << "negative" << endl;
	}
	else if (randomNum == 0)
	{
		cout << "zero" << endl;
	}
	else
	{
		break; // if the program encounter integer greater than 1000 and less than -1000
	}

	}
	



return 0;
}
