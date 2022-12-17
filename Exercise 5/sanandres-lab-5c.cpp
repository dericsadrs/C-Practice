
#include <iostream>
using namespace std;
int main ()
{

    int i;
    char letterBox[10]; 
    for ( i = 0; i < 10; i++)
        {
            cin >> letterBox[i];
            if (letterBox[i] == '.') // if naka incounter sya nang dot mag iistop na sya
            {
                break;	
            }
        
                   
        }
    for ( int j = i-1; j >= 0; j--)
    {
        cout << letterBox[j];
        
    }    
        
        return 0;
}
