//2
//
//[()]{}{[()()]()}
//
//[(])
//
//YES
//
//NO

#include<bits/stdc++.h>
using namespace std;

int main(){
   ios_base::sync_with_stdio(0);cin.tie(0);

    int t;
    cin>>t;
    while(t--){
    	string s; cin >> s;
    	stack<char>st;
    	int ok = 1;
    	for(int i = 0; i < s.size();i++){
    		if(s[i] == '[' || s[i] == '(' || s[i] == '{'){
    			st.push(s[i]);
			}
			else if(s[i] == ']'){
				if(!st.empty() && st.top() == '[') st.pop();
			}else if(s[i] == ')'){
				if(!st.empty() && st.top() == '(') st.pop();
			}else{
				if(!st.empty() && st.top() == '{') st.pop();
			}
		}
		if(st.empty() ) cout <<"YES";
		else cout <<"NO";
		cout << endl;
    }
}
