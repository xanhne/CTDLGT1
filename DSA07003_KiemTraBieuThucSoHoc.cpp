//3
//
//((a+b))
//
//(a + (b)/c)
//
//(a + b*(c-d))
//
//Yes
//
//Yes
//
//No

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);

    int t=1;
    cin>>t;
    while(t--){
    	scanf("\n");
    	string s="";
    	getline(cin,s);
    	int ok = 1;
    	stack<char>st;
    	for (int i = 0; i < s.size(); i++){
    		if(s[i] == ')'){
    			int oke = 0;
    			while(!st.empty() && st.top() != '('){
    				if(st.top() == '+' || st.top() == '-' || st.top() == '*' || st.top() == '/') oke = 1;
    				st.pop();
				}
				st.pop();
				if(!oke){
					ok = 0; break;
				}
			}st.push(s[i]);
		}
		if(ok) cout <<"No\n";
		else cout <<"Yes\n";
    }
}
