#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    int c = 0;
	    while(n > 0)
	    {
	        if(n%10 == 4)
	            c++;
	        n = n / 10;
	    }
	    cout << c << endl;
	}
	return 0;
}

