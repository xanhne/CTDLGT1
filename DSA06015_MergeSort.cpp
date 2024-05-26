// 2
// 5
// 4 1 3 9 7
// 10
// 10 9 8 7 6 5 4 3 2 1

// 1 3 4 7 9
// 1 2 3 4 5 6 7 8 9 10

#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++)
			cin >> a[i];
		sort(a.begin(), a.end());
		for (int i = 0; i < n; i++)
			cout << a[i] << " ";
		cout << endl;
	}
}