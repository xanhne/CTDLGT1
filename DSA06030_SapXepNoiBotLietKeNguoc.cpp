// 1

// 6

// 4 1 3 9 8 5

// Buoc 2: 1 3 4 5 8 9

// Buoc 1: 1 3 4 8 5 9

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(auto &i:a) cin >> i;
		vector<vector<string>>ve;
		for(int i = 0; i < n-1;i++){
			int x = 0;
			for(int j = 0; j < n-i-1; j++){
				if(a[j] > a[j+1]){
					swap(a[j],a[j+1]);
					x = 1;
				}
			}
			vector<string>v;
			if(x == 0) break;
			else{
				string k = "Buoc "+to_string(i+1)+":";
				v.push_back(k);
				for(int x:a){
					v.push_back(to_string(x));
				}
				ve.push_back(v);
			}
		}
		for(int i = ve.size()-1; i >= 0; i--){
			for(int j = 0; j < ve[i].size();j++){
				cout << ve[i][j]<<" ";
			}
			cout << endl;
		}
	}
}

