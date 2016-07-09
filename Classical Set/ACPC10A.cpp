/*
SPOJ Classical Set
Code: ACPC10A
*/
#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	int d1, d2;
	while(1)
	{
		cin >> a >> b >> c;
		if(a==0 && b==0 && c==0)
			break;
		if((d1 = c-b) == (d2 = b-a))
		{
			cout << "AP " << c + d1 <<endl;
		}
		else if((d1 = c/b) == (d2 = b/a))
		{
			cout << "GP " << c * d1 <<endl;
		}

	}
	return 0;
}
