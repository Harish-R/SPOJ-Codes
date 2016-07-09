/*
SPOJ Classical Set
Code: LASTDIG
*/
#include<iostream>

using namespace std;

/*
int mod_exp(long long int a, long long int b, long long int n = 10)
{
    int lastdig = 1;
    for(int i=0;i<b;i++)
        lastdig = (lastdig * a) % n;
    return lastdig;
}*/

long long int mod_exp(long long int a, long long int b, long long int n = 10)
{
    long long int lastdig = 1;
    while(b)
    {
        if(b%2 != 0)
            lastdig = (lastdig * a) % n;
        b = b >> 1;
        a = (a * a) % n;
    }
    return lastdig;
}

int main()
{
    long long int a, b;
    int t;
    cin >> t;
    while(t--)
    {
        cin >> a >> b;
        cout << mod_exp(a,b) << endl;
    }
    return 0;
}
