//2
//
//*+AB-CD
//
//*-A/BC-/AKL
//
//AB+CD-*
//
//ABC/-AK/L-*

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);

    int t=1;
    cin>>t;
    while(t--){
    	string s; cin >> s;
    	stack<string>st;
    	for(int i = s.size()-1; i >= 0; i--){
    		if(isalpha(s[i])){
    			st.push(string(1,s[i]));
			}else{
				string x1 = st.top(); st.pop();
				string x2 = st.top(); st.pop();
				st.push(x1+x2+s[i]);
			}
		}
		cout << st.top() << endl;
    }
}
