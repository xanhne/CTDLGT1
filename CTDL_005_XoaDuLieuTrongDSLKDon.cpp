// 14
// 1 1 1 4 5 1 1 1 1 7 1 8 1 9 
// 1

// 4 5 7 8 9

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
    	for (int i = 0; i < n; i++) cin >> a[i];
    	cin >> x;
    	for (int i = 0; i < n; i++){
    		if(a[i]!=x) cout << a[i]<<" ";
		}
    }
}
