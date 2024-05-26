//Input:
//11 25
//
//Ouput:
//36 37
//
//Input:
//1430 4862
//
//Ouput:
//6282 6292
//
//Input:
//16796 58786
//
//Ouput:
//74580 85582

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);

    int t=1;
    //cin>>t;
    while(t--){
    	string n,m; cin >> n >> m;

    	for (int i = 0; i < n.size(); i++){
    		if(n[i] =='6') n[i] = '5';
		}
    	for (int i = 0; i < m.size(); i++){
    		if(m[i] =='6') m[i] = '5';
		}
		cout << stoll(n) + stoll(m) <<" ";

		for (int i = 0; i < n.size(); i++){
    		if(n[i] =='5') n[i] = '6';
		}
    	for (int i = 0; i < m.size(); i++){
    		if(m[i] =='5') m[i] = '6';
		}
		cout << stoll(n) + stoll(m) <<" ";
    }
}
