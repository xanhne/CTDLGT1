//2
//
//AGGTAB
//
//GXTXAYB
//
//AA
//
//BB
//
//4
//
//0

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);

    int t=1;
    cin>>t;
    while(t--){
    	string s1,s2; 
		cin >> s1 >> s2;
    	long long dp[1005][1005]={0};
    	long long d = 0;
		
    	for(int i = 1; i <= s1.size();i++){
    		for(int j = 1; j <= s2.size(); j++){
    			if(s1[i-1] == s2[j-1]){
    				dp[i][j] = dp[i-1][j-1] + 1;
				}
				else dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
				d = max(d,dp[i][j]);
			}
		}
		cout << d << endl;
    }
}
