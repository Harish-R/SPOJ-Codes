/*
SPOJ Classical Set
Code: STAMPS
*/
#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

int main()
{
    int k, nof, nos ,temp;
    int *frns, *ptr;
    int sum, i, j, t;
    scanf("%d", &t);
    for(int i=1;i<=t; i++)
    {
        scanf("%d%d", &nos, &nof);
        frns = (int*)malloc(nof*sizeof(int));
        ptr = frns;
        sum = 0;
        temp = 0;
        for(j=0;j<nof;ptr++,j++)
            cin >> *ptr;
        sort(frns, frns+nof);
        for(k=nof-1; k>=0 ;k--)
        {
            sum = sum + frns[k];
            if(sum >= nos)
            {
                temp = 1;
                printf("Scenario #%d:\n%d\n", i, nof - k);
                break;
            }
        }
        if(temp == 0)
        {
            printf("Scenario #%d:\n%s\n", i, "impossible");
        }
    }
    return 0;
}

