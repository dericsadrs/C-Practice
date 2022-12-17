#include <iostream>
#include <cstring>
#include <string>
 
using namespace std;
 
int main() {
 
    string s;
    
    while (cin >> s)
	{ 
        for (int i = 0; i < s.length(); i++){
            if (s[i] == 'h' && s[i+1] == 'e' && s[i+2] == 'a' && s[i+3] == 'r' && s[i+4] == 't')
	{
                i = i+4;
                cout << ">>-h-e-a-r-t->";
            }else{
                cout << s[i];
            }
        }
        cout << endl;
    }
 
    return 0;
}
