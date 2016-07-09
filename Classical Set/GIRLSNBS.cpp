#include <iostream>
using namespace std;
 
int main()
{
	int g, b;
	while(1)
	{
		cin >> g >> b;
		if(b == -1 && g ==-1)
			break;
		if(g == 0 && b == 0)
            cout << 0 << endl;
		else if(g == 0)
            cout << b << endl;
        else if(b == 0)
			cout << g << endl;
		else if(g == b)
			cout << 1 << endl;
		else if(g > b) {
			if (g%(b+1) == 0)
				cout << (int)(g / (b+1)) << endl;
			else
				cout << (int)((g / (b+1)) + 1) << endl;
        }
		else {
			if(b%(g+1) == 0)
				cout << (int)(b / (g+1)) << endl;
			else
				cout << (int)((b / (g+1)) + 1) << endl;
        }
	}
	return 0;
}