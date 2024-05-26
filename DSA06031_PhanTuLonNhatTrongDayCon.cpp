// 2

// 9 3

// 1 2 3 1 4 5 2 3 6

// 10 4

// 8 5 10 7 9 4 15 12 90 13

// 3 3 4 5 5 5 6

// 10 10 10 15 15 90 90

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		long long n,k; 
		cin >> n >> k;
		long long a[n];
		for(auto &i:a){
			cin >> i;
		}
		multiset<long long>mu;
		for(int i = 0; i < k; i++){
			mu.insert(a[i]);
		}
		
		auto it = mu.rbegin();
		cout << *it <<" ";
		for(int i = 1; i < n - k + 1; i++){
			mu.erase(mu.find(a[i-1]));
			mu.insert(a[i + k -1]);
			auto it = mu.rbegin();
			cout << *it <<" ";
		}
		cout << endl;
	}
}
