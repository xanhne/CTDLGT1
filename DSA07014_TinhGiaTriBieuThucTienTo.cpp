//2
//
//-+8/632
//
//-+7*45+20
//
//8
//
//25

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
    cin>>t;
    while(t--){
    	string s; cin >> s;
    	stack<int>st;
    	for(int i = s.size()-1; i >= 0; i--){
    		if(s[i] == '*' || s[i] == '/' || s[i] == '-' || s[i] == '+'){
    			long long x1 = st.top(); st.pop();
    			long long x2 = st.top(); st.pop();
    			st.push(hack(s[i],x1,x2));
			}else{
				string x ="" + s[i];
				st.push(s[i] -'0');
			}
		}
		cout << st.top() << endl;
    }
}
