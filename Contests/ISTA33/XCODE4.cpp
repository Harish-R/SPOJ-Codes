#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    long int n, t;
    long long int x, sum, pow = 1;
    scanf("%d", &t);
    while(t--)
    {
        sum = 0;
        pow = 1;
        scanf("%d", &n);
        for(int i=0;i<n;i++)
        {
            scanf("%lld", &x);
            sum = (x + sum) % 1000000007;
        }
        for(int i=0;i<n-1;i++)
            pow = (pow*2) % 1000000007;
        printf("%lld\n", (sum * pow) % 1000000007);
    }
    return 0;
}


