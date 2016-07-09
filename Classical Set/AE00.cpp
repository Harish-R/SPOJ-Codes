/*
SPOJ Classical Set
Code: AEOO
*/
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;
    for(int i=1;i<=sqrt(n);i++)
        for(int j=i+1;i*j<=n;j++)
            count++;

    cout << (int)sqrt(n) + count << endl;
    return 0;
}
