/*
SPOJ Classical Set
Code: CANDY
*/
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n, sum, each, count;
    while(1)
    {
        cin >> n;
        if(n == -1)
            break;
        int a[n];
        sum = 0;
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        if(sum%n == 0)
        {
            each = sum/n;

            count = 0;
            for(int i=0; i<n; i++)
            {
                while(a[i]<each)
                {
                    a[i]++;
                    count++;
                }
            }
            cout << count << endl;
        }
        else
            cout << -1 << endl;
    }
}

