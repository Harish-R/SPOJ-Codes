/*
SPOJ Classical Set
Code: FCTRL2
*/
#include<stdio.h>

int main()
{
    int n, i, j, m, carry, x, t;
    int a[200];
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        m = 1;
        carry = 0;
        a[0] = 1;
        for(i=1;i<=n;i++)
        {
            for(j=0;j<m;j++)
            {
                x = a[j]*i + carry;
                a[j] = x%10;
                carry = x/10;
            }
            while(carry>0)
            {
                a[m] = carry%10;
                carry = carry/10;
                m++;
            }
        }
        for(i=m-1;i>=0;i--)
            printf("%d", a[i]);
        printf("\n");
    }
    return 0;
}
