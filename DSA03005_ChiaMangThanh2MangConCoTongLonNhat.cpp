//2
//5 2
//8 4 5 2 10
//8 3
//1 1 1 1 1 1 1 1
//
//17
//2

#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);

    int t=1;
    cin>>t;
    while(t--){
    	ll n,s,sum = 0,sum2 = 0;
    	cin >> n >> s;
    	ll a[n],b[n];
    	for (int i = 0; i < n; i++){
    		cin >> a[i]; sum += a[i];
		}
		sort(a,a+n);
		int x = max(s,n-s);
		for(int i = n-1; i >= 0; i--){
			if(x == 0) break;
			sum2 += a[i];
			x--;
		}
		cout << (sum2) - (sum - sum2) << endl;
    	
    }
}
