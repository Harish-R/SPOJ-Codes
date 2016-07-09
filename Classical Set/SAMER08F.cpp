/*
SPOJ Classical Set
Code: SAMER08F
*/
#include<iostream>

using namespace std;

int main()
{
    int k, n;
    while(1)
    {
        cin >> k;
        n = 0;
        if(k==0)
            break;
        for(;k>=1;k--)
            n += k*k;
        cout << n <<endl;
    }
    return 0;
}
