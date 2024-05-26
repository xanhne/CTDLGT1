//2
//1
//5
//
//1
//13

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);

    int t=1;
    cin>>t;
    while(t--){
    	long long n; 
		cin >> n;
    	long long dp[n+5]={0};
    	dp[0] = dp[1] = 1;
    	for(int i = 2; i <= n; i++){
    		for(int j = 1; j <= min(i,3); j++){
    			dp[i] += dp[i-j];
			}
		}
		cout << dp[n] << endl;
    }
}
