// 2

// 2 5

// 1 1

// 1 0

// 3 1000000000

// 1 2 3

// 4 5 6

// 7 8 9

// 8

// 581039956

#include <bits/stdc++.h>
using namespace std;

struct data{
	long long x[10][10];
};

int n;
long long mod = 1000000007;

struct data operator*(struct data a, struct data b){
	struct data xx;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			xx.x[i][j] = 0;
			for (int k = 0; k < n; k++)
				xx.x[i][j] = (xx.x[i][j] + (a.x[i][k] * b.x[k][j]) % mod) % mod;
		}
	}
	return xx;
};

struct data poww(struct data a, long long k){
	if (k == 1)
		return a;
	if (k % 2 == 1)
		return a * poww(a, k - 1);
	struct data xx = poww(a, k / 2);
	return xx * xx;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	while (t--){
		long long k, s = 0;
		cin >> n >> k;
		struct data a;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				cin >> a.x[i][j];
		a = poww(a, k);
		for (int i = 0; i < n; i++)
			s = (s + a.x[i][n - 1]) % mod;
		cout << s << endl;
	}
}