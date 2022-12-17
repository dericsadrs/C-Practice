#include <iostream>

using namespace std;

int main()
{
	
	int numberOfInputs,timesOfNumber,numberInt,maximum,minimum,totalSum, i = 1;
	string comb;

	cin >> numberOfInputs;
	if (1 <= numberOfInputs && numberOfInputs <=100) // if this condition is met the program will run else the program will exit
	{
		while(numberOfInputs >= i)
		{
			numberOfInputs--;
			cin >> timesOfNumber;
			if(1 < timesOfNumber && timesOfNumber <= 100)
			{
				maximum = 1;
				minimum = 100;
				while(timesOfNumber >= i)
				{
					timesOfNumber--;
					cin >> numberInt;
					if (-100 <= numberInt && numberInt <= 100)
					{
						if (numberInt >= maximum)
						{
							maximum = numberInt;
						}
						if (numberInt <= minimum)
						{
							minimum = numberInt;
						}
					totalSum = maximum+minimum; // total sum
					}
				}
			}
		comb = comb + to_string(minimum) + " " + to_string(maximum) + " " + to_string(totalSum) + "\n"; // combination of the output in loops
		} 
	cout << comb; // displaying all the loop output
	}

return 0;
}
