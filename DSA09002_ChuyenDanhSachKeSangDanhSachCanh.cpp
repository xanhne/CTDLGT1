//3
//
//2 3
//
//1 3
//
//1 2
//
// 
//
//1 2
//
//1 3
//
//2 3

#include<bits/stdc++.h>
using namespace std;

int hack(char c, int a, int b){
	if(c=='+') return a+b;
	if(c == '-') return a-b;
	if(c == '*') return a*b;
	return a/b;
}

int main(){
   ios_base::sync_with_stdio(0);cin.tie(0);

    int t=1;
    //cin>>t;
    while(t--){
    	int n; cin >> n;
    	cin.ignore(1);
    	for (int i = 1; i <= n; i++){
    		string s;
    		getline(cin,s);
    		stringstream ss(s);
    		string token;
    		while(ss >> token){
    			if(stoll(token) > i) cout << i <<" "<< token << endl;
			}
		}
    }
}
