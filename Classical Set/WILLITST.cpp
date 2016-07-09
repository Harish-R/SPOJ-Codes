/*
SPOJ Classical Set
Code: WIllITST
*/
#include<iostream>

using namespace std;

int main()
{
    long long int n;
    cin >> n;
    if(n <= 1)
        cout << "TAK" << endl;
    else if(!(n&(n-1)))
        cout << "TAK" << endl;
    else
        cout << "NIE" << endl;
    return 0;
}

