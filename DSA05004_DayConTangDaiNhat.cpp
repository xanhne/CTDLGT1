//6
//
//1 2 5 4 6 2
//
//4

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);

    int t=1;
    //cin>>t;
    while(t--){
    	long long n; cin >> n;
    	long long a[n];
    	for (int i = 0; i < n; i++) cin >> a[i];
    	long long dp[n+1]={0},ans = INT_MIN;
    	for(int i = 0; i < n;i++){
    		dp[i] = 1;
    		for(int j = 0; j < i; j++){
    			if(a[i] > a[j]) dp[i] = max(dp[i],dp[j] + 1);
			}
			ans = max(ans,dp[i]);
		}
		cout <<  ans;
    }
}
