/*
SPOJ Classical Set
*/
#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
    long long int t, n, temp;
    cin >> t;
    while(t--)
    {
        cin >> n;
        long long int mod_res = 0;
        for(int i=0;i<n;i++)
        {
            cin >> temp;
            mod_res = (mod_res + temp)%n;
        }
        if(mod_res%n == 0)
           cout << "YES" << endl;
        else
          cout << "NO" << endl;
    }
    return 0;
}
