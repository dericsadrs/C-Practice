#include <iostream>
using namespace std;
int main ()
{


    int numberTo = 1;
        int N;
        char condition = 'y';

	cout << "NUMBER PRINTER" << endl;
	cout << "=====================" << endl;

        while ( condition ==  'y')
        {  cout <<" Enter the number of rows to be printed"; cin >> N;
            for ( int i = 1; i <= N; i++)
                {
                    for ( int j = 1; j <= i; j++)
                        {
                                cout << numberTo;
                        }
                        numberTo+=1;
			N+=1;
                        i +=1;
                        cout << "\n";
                  }
                cout << " <y/n?>"; cin >> condition;
                if ( condition == 'y')
                    {
                        numberTo=1;
                    }
        }
            
            return 0;
}

