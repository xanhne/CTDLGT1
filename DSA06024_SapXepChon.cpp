// 4

// 5 7 3 2

// Buoc 1: 2 7 3 5

// Buoc 2: 2 3 7 5

// Buoc 3: 2 3 5 7

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	int a[n];
	for(auto &i:a) cin >> i;
	for(int i = 0; i < n-1; i++){
		int minn = i;
		for(int j = i + 1; j < n; j++){
			if(a[j] < a[minn]) minn = j;
		}
		swap(a[i],a[minn]);
		vector<int> v(a,a+n);
		cout << "Buoc " << i + 1 <<": ";
		for(int x:v) cout << x <<" ";
		cout << endl;
	}
}

