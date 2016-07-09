/*
SPOJ Classical Set
Code: FCTRL
*/
#include<stdio.h>

int main()
{
    int t,i,j,k,n,count;
    scanf("%d", &t);
    for(k=0;k<t;k++)
    {
        scanf("%d", &n);
        for(count=0,i=1;i<=n;i++)
        {
            if(n/pow(5,i) < 1)
                break;
            count += n/pow(5,i);
        }
        printf("%d\n",count);
    }
    return 0;
}


