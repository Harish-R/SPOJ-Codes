/*
SPOJ Classical Set
Code: EIGHTS
*/
#include<iostream>

using namespace std;

int main()
{
    int t;
    long long int k;
    cin >> t;
    while(t--)
    {
        cin >> k;
        cout << 192 + ((k-1)*250) << endl;
    }
    return 0;
}
