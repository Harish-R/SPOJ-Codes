#include <iostream>
#include <cstdio>
#include <set>
using namespace std;
 
int main()
{
 
	long int t, sum, num, step_count;
	cin >> t;
	num = sum = t;
	step_count = 0;
	set<int> myset;
	set<int>::iterator it;
	// Initialize dynamic hash list
	while(sum != 1)
	{
		sum = 0;
		step_count++;
		while(num)
		{
			sum += (num%10) * (num%10);
			num /= 10;
		}
		// If sum already exists in hash list, break the while loop;
		it = myset.find(sum);
		if(it != myset.end())
			break;
		// Else Store it in hash list
		myset.insert(sum);
		num = sum;
	}
	if(sum == 1)
		cout << step_count << endl;
	else
		cout << -1 << endl;
	return 0;
}