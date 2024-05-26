//push 3
//
//push 5
//
//show
//
//push 7
//
//show
//
//pop
//
//pop
//
//show
//
//3 5
//
//3 5 7
//
//3

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);

    int t=1;
    //cin>>t;
    while(t--){
    	string s;
    	stack<long long>st;
    	while(getline(cin,s)){
    		stringstream ss(s);
    		int d = 0;
    		string x1="",x2="",token;
    		while(ss >> token){
    			if(!d){
    				x1 = token; d = 1;
				}else x2 = token;
			}
			if(x1 =="push"){
				st.push(stoll(x2));
			}else if(x1 == "pop"){
				st.pop();
			}else if(x1 =="show"){
				if(st.empty()){
					cout <<"empty\n";
					continue;
				}
				vector<long long>v;
				while(!st.empty()){
					v.push_back(st.top()); st.pop();
				}
				reverse(v.begin(),v.end());
				for(long long i:v){
					cout << i <<" ";
					st.push(i);
				}
				cout << endl;
			}
		}
    }
}
