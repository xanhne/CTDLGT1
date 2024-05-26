// 12
// 1 1 1 4  5 1 4  7 7 8 1 9

// 1 4 5 7 8 9

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);

    int t=1;
    //cin>>t;
    while(t--){
    	long long n,x; 
		cin >> n;
    	long long a[n];
		map<long long,long long>m;
    	for (int i = 0; i < n; i++){
    		cin >> a[i]; m[a[i]] = 1;
		}
		for (int i = 0; i < n; i++){
			if(m[a[i]] == 1){
				cout << a[i]<<" ";
				m[a[i]] = 0;
			}
		}
    }
}
