// 2
// 7
// 7 1 2 3 4 5 6
// 8
// 1 6 9 4 3 7 8 2

// 7 1 6 2 5 3 4
// 9 1 8 2 7 3 6 4

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n; 
		int a[n];
		for(auto &i:a) cin >> i;
		sort(a,a+n);
		int l1 = 0,l2 = n-1;
		for(int i = 0; i < n; i++){
			if(i%2==0){
				cout << a[l2] <<" ";l2--;
			}
			else{
				cout << a[l1] <<" "; l1++;
			}
		}
		cout << endl;
	}
}

