//2
//
//231*+9�
//
//875*+9-
//
//-4
//
//34

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
    	for (int i = 0; i < s.size(); i++){
    		if(s[i] == '*' || s[i] == '/' || s[i] == '-' || s[i] == '+'){
    			long long x1 = st.top(); st.pop();
    			long long x2 = st.top(); st.pop();
    			st.push(hack(s[i],x2,x1));
			}else{
				string x ="" + s[i];
				st.push(s[i] -'0');
			}
		}
		cout << st.top() << endl;
    }
}
