#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int t, n, flag1, flag2;
    cin >> t;
    while(t--)
    {
        long long int a[50], maxsum=0, minsum=0, min, max;
        flag1 = flag2 = 0;   // Checks the existence of negative numbers
        scanf("%d", &n);
        for(int i=0;i<n;i++)
            scanf("%lld", &a[i]);
	min = a[0];
	max = a[0];
        for(int i=0;i<n;i++)
        {
            // Adding all positive and negative numbers seperately
            if(a[i] >= 0)
            {
            	flag1 = 1;
                maxsum += a[i];
            }
            else
            {
                flag2 = 1;
                minsum += a[i];
            }
            // Checking for min element
            if(a[i] < min)
                min = a[i];
            if(a[i] > max)
                max = a[i];
        }
        // If negative numbers, print the postive - negative
        if(flag1 && flag2)
            printf("%lld\n", maxsum - minsum);
        // Else (only positive numbers or negative numbers) print the sum of all elements - minimum element
        else if(flag1 && !flag2)
            printf("%lld\n", maxsum - min);
        else if(!flag1 && flag2)
            printf("%lld\n", max - minsum);
    }
    return 0;
}



