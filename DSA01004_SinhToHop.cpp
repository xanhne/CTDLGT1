//2
//
//4  3
//
//5  3
//
//123 124 134 234
//
//123 124 125 134 135 145 234 235 245 345

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
		int a[k + 1];
		for (int i = 1; i <= k; i++)
			a[i] = i;
		while (1){
			for (int i = 1; i <= k; i++)
				cout << a[i];
			cout << " ";
			int ok = 0;
			for (int i = k; i >= 1; i--){
				if (a[i] != n - k + i){
					ok = 1;
					a[i]++;
					for (int j = i + 1; j <= k; j++)
						a[j] = a[j - 1] + 1;
					break;
				}
			}
			if (ok == 0)
				break;
		}
		cout << endl;
	}
}