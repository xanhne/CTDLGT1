// 4

// 5 7 3 2

// Buoc 0: 5

// Buoc 1: 5 7

// Buoc 2: 3 5 7

// Buoc 3: 2 3 5 7

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	int a[n];
	for(auto &i:a) cin >> i;
	multiset<int>mu;
	for(int i = 0; i < n; i++){
		mu.insert(a[i]);
		cout << "Buoc "<<i<<": ";
		for(auto x:mu) cout << x <<" ";
		cout << endl;
	}
}

