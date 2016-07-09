/*
SPOJ Classical Set
Code: PRIME1
*/
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int t, sqrtb, a, b, *prime, num_primes, k, start;
    bool *temp_primes, *primes;
    cin >> t;
    while(t--)
    {
        cin >> a >> b;

        // Using normal sieve, find primes within sqrt(b)
        sqrtb = sqrt(b);
        temp_primes = new bool[sqrtb+1];
        // Initializing all to true
        temp_primes[0] = temp_primes[1] = false;
        for(int i=2;i<=sqrtb;i++)
            temp_primes[i] = true;
        // Canceling multiples of primes
        for(int i=2;i<=sqrt(sqrtb);i++)
            if(temp_primes[i] == true)
                for(int j=i*2;j<=sqrtb;j+=i)
                    temp_primes[j] = false;
        // Adding the primes to a separate array
        prime = new int[sqrtb+1];
        num_primes = 0;
        for(int i=2, j=0;i<=sqrtb;i++)
            if(temp_primes[i] == true)
            {
                prime[j] = i;
                j++;
                num_primes++;
            }

        // Segmented Sieve
        /*for(int i=0;i<num_primes;i++)
            cout << prime[i] << endl;
        */
        primes = new bool[b+1];
        primes[0] = primes[1] = false;
        for(int i=2;i<=b;i++)
            primes[i] = true;

        // For all in prime array, cancel its multiples with in range a to b
        for(int i=0;i<num_primes;i++)
        {
            k = prime[i];
            start = a/k;
            start *= k;
            for(int j=start;j<=b;j+=k)
            {
                if(j<a)
                    continue;
                primes[j] = false;
            }
        }

        for(int i=0;i<num_primes;i++)
            if(prime[i] >= a && prime[i] <= b)
                cout << prime[i] << endl;

        for(int i=a;i<=b;i++)
            if(primes[i] == true)
                cout << i << endl;

        cout << endl;

        delete[] primes;
        delete[] temp_primes;
        delete[] prime;
    }
    return 0;
}
