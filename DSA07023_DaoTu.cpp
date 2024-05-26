//2
//I like this program very much
//
//much very program this like I
//
//much very program this like I
//I like this program very much
//
// 

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);

    int t=1;
    cin>>t;
    scanf("\n");
    while(t--){
    	string s;
    	getline(cin,s);
    	stack<string>st;
    	string token;
    	stringstream ss(s);
    	while(ss >> token) st.push(token);
    	while(!st.empty()){
    		cout << st.top() <<" "; st.pop();
		}
		cout << endl;
    }
}
