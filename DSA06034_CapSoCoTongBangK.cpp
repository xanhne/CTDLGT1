// 4

// 4 6

// 1 5 7 -1

// 5 6

// 1 5 7 -1 5

// 4 2

// 1 1 1 1

// 13 11

// 10 12 10 15 -1 7 6 5 4 2 1 1 1

// 2

// 3

// 6

// 9

#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	while (t--){
		int n, k;
		cin >> n >> k;
		int a[n];
		long long s = 0;
		map<int, long long> m;
		for (int i = 0; i < n; i++){
			cin >> a[i];
			m[a[i]]++;
		}
		for (auto i : m){
			if (i.first * 2 == k)
				s += i.second * (i.second - 1);
			else
				s += i.second * m[k - i.first];
		}
		cout << s / 2 << endl;
	}
}