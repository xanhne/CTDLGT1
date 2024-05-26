// 2
// 5
// 4 5 3 8 6
// 3
// 2 1 3

// 1
// 0

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n], b[100005]={0};
		for(auto &i:a){
			cin >> i;
			b[i] = 1;
		}
		sort(a,a+n);
		int dem = 0;
		for(int i = a[0]; i < a[n-1]; i++){
			if(b[i] == 0) dem++;
		}
		cout << dem << endl;
	}
}

