// 2

// 6

// 12 4 78 90 45 23

// 8

// 20 4 1 2 3 4 2 10

// 5

// 5

#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	while (t--){
		int n, s = 0;
		cin >> n;
		int a[n + 1], maxa[n + 1], mina[n + 1];
		maxa[n] = mina[n] = n;
		for (int i = 1; i <= n; i++)
			cin >> a[i];
		for (int i = n - 1; i >= 1; i--){
			if (a[i] > a[i + 1])
				mina[i] = mina[i + 1];
			else
				mina[i] = i;
			if (a[i] < a[i + 1])
				maxa[i] = maxa[i + 1];
			else
				maxa[i] = i;
		}
		for (int i = 1; i <= n; i++){
			s = max(s, mina[maxa[i]] - i + 1);
		}
		cout << s << endl;
	}
}