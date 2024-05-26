//4
//
//))((
//
//((((
//
//(((())
//
//)(())(((
//
//2
//
//2
//
//1
//
//3

#include<bits/stdc++.h>
using namespace std;

#define ms(s,n) memset(s,n,sizeof(s))

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);

    int t=1;
    cin>>t;
    while(t--){
    	string s; cin >> s;
    	bool used[100005];
    	ms(used,false);
    	stack<char>st,st1,st2;
    	for(int i = 0; i < s.size(); i++){
    		if(s[i] == ')'){
    			for(int j = i - 1; j >= 0; j--){
    				if(!used[j] && s[j] =='('){
    					used[i] = true;
    					used[j] = true; break;
					}
				}
			}
		}
		for(int i = 0; i < s.size(); i++){
    		if(!used[i]){
    			if(s[i] =='(') st1.push(s[i]);
    			else st2.push(s[i]);
			}
		}
		int dem = 0,d1 = 0,d2 = 0;
		if(st1.size()%2==0){
			dem += st1.size()/2;
		}else{
			if(st1.size() < 2){
				d1 = st1.size();
			}else{
				dem += st1.size()/2;
				d1 = st1.size()%2;
			}
		}
		if(st2.size()%2==0){
			dem += st2.size()/2;
		}else{
			if(st2.size() < 2){
				d2 = st2.size();
			}else{
				dem += st2.size()/2;
				d2 = st2.size()%2;
			}
		}
		cout << dem + d1 + d2 <<  endl;
		
    }
}
