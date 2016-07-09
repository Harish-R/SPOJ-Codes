#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    long long int n, res = 0, x;
    scanf("%lld", &n);
    while(n--)
    {
       	scanf("%lld", &x);
        res = res ^ x;
    }
    printf("%lld\n", res);
    return 0;
}

