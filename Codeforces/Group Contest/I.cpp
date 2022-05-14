#include <bits/stdc++.h>

using namespace std;

unsigned long long int getLeftmostBit(long long int n){
	long long m = 0;
	while (n > 1){
		n = n >> 1;
		m++;
	}
	return m;
}

unsigned long long int getNextLeftmostBit(long long int n, long long int m){
	unsigned long long int temp = 1 << m;
	while (n < temp) {
		temp = temp >> 1;
		m--;
	}
	return m;
}

long long solve(long long n);

unsigned long long int countbits(unsigned long long int n, long long int m){
	if (n == 0)
		return 0;

	m = getNextLeftmostBit(n, m);

	if (n == ((unsigned long long int)1 << (m + 1)) - 1)
		return (unsigned long long int)(m + 1) * (1 << m);

	n = n - (1 << m);
	return (n + 1) + solve(n) + m * (1 << (m - 1));
}

long long solve(long long n){
	long long m = getLeftmostBit(n);

	return countbits(n, m);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

	long long n;
    cin >> n;

	cout << solve(n);

	return 0;
}