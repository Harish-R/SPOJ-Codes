/*
SPOJ Classical Set
Code: TOANDFRO
*/
#include<iostream>

using namespace std;

int main()
{
    string s;
    int len, col, row, i, j, k, l, m, inc;
    while(1)
    {
        cin >> col;
        if(col == 0)
            break;
        cin >> s;
        len = s.length();
        row = len/col;

        for(i=0,j=col,k=1;i<col;i++,j--,k+=2)
        {
            l=i;
            cout << s[l];
            m=1;
            l = l+(2*j-1);
            m++;
            while(l<len)
            {
                if(m%2==0)
                {
                    cout << s[l];
                    l=l+k;
                    m++;
                }
                else
                {
                    cout << s[l];
                    l = l+(2*j-1);
                    m++;
                }
            }
        }

        cout << endl;
        s.clear();
    }
    return 0;
}

