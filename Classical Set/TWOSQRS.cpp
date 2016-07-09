/*
SPOJ Classical Set
Code: TWOSQRS
*/
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	long long int n, t, i, j, flag;
	cin >> t;
	while(t--) {
		cin >> n;
		flag = 0;
		i=0;
		j=sqrt(n);
		while(i <= j) {
			if(i * i > n) {
				cout << "No" << endl;
				break;
			}
			if(i*i + j*j == n) {
				cout << "Yes" << endl;
				flag = 1;
				break;
			}
			if(i*i + j*j < n) {
				i++;
			} else {
				j--;
			}
		}
		if(flag != 1)
			cout << "No" << endl;
	}
	return 0;
}
