// 6

// 5 8 3 9 1 4

// Buoc 5: 1 3 4 5 8 9

// Buoc 4: 1 3 4 5 9 8

// Buoc 3: 1 3 4 9 5 8

// Buoc 2: 1 3 8 9 5 4

// Buoc 1: 1 8 3 9 5 4

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	int a[n];
	for(auto &i:a) cin >> i;
	vector<vector<string>>ve;
	for(int i = 0; i < n-1; i++){
		int minn = i;
		for(int j = i + 1; j < n; j++){
			if(a[j] < a[minn]) minn = j;
		}
		swap(a[i],a[minn]);
		vector<string> v;
		string k= "Buoc " + to_string(i+1)+":";
		v.push_back(k);
		for(int x:a){
			v.push_back(to_string(x));
		}
		ve.push_back(v);
	}
	for(int i = ve.size()-1; i >= 0; i--){
		for(int j = 0; j < ve[i].size(); j++) cout << ve[i][j]<<" ";
		cout << endl;
	}
}

