//2
//
//2 2
//
//4 2
//
// 
//
//2
//
//5

#include<bits/stdc++.h>
using namespace std;

const int mod=1e9+7;

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);

    int t=1;
    cin>>t;
    while(t--){
    	long long n,k; 
		cin >> n >> k;
    	long long dp[n+5]={0};
    	dp[0] = dp[1] = 1;
    	for(long long i = 2; i <= n; i++){
    		//cout << i << endl;
    		for(int j = 1; j <= min(i,k); j++){
    			dp[i] += dp[i-j];
    			//cout << dp[i]<<" ";
    			dp[i]%=mod;
			}
			//cout << endl;
		}
		cout << dp[n]<<endl;
    }
}
