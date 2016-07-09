/*
SPOJ Classical Set
Code: ADDREV
*/
#include<stdio.h>

int main()
{
    int rev1=0, rev3=0, rev2=0, t, a, b, c, i;
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
        rev1=rev3=rev2=0;
        scanf("%d%d", &a, &b);
        while(a!=0)
        {
            rev1=rev1*10+a%10;
            a/=10;
        }
        while(b!=0)
        {
            rev2=rev2*10+b%10;
            b/=10;
        }
        c=rev1+rev2;
        while(c!=0)
        {
            rev3=rev3*10+c%10;
            c/=10;
        }
        printf("%d\n", rev3);
    }
    return 0;
}

