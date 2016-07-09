#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
    char name[1001];
    char x, y;
    scanf("%s", name);
    cin >> x >> y;
    for(int i=0; *(name+i); i++)
        if(name[i] == x)
            name[i] = y;
    printf("%s\n", name);
    return 0;
}
