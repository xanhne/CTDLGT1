//2
//
//*+AB-CD
//
//*-A/BC-/AKL
//
//((A+B)*(C-D))
//
//((A-(B/C))*((A/K)-L)

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);

    int t=1;
    cin>>t;
    while(t--){
    	string s; cin >> s;
    	stack<string>st1,st2;
    	for(int i = s.size() - 1; i >= 0;i--){
    		if(isalpha(s[i])){
    			st1.push(string(1,s[i]));
			}else{
				string x = "(";
				string x1 = st1.top(); st1.pop();
				string x2 = st1.top(); st1.pop();
				x = x + x1 +string(1,s[i])+x2 +')';
				st1.push(x);
			}
		}
		cout << st1.top() << endl;
    }
}
