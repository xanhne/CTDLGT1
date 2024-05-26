//10
//
//PUSHBACK 1
//
//PUSHFRONT 2
//
//PUSHBACK 3
//
//PRINTFRONT
//
//POPFRONT
//
//PRINTFRONT
//
//POPFRONT
//
//PRINTBACK
//
//POPFRONT
//
//PRINTBACK
//
// 
//
//2
//
//1
//
//3
//
//NONE

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);

    int t=1;
    cin>>t;
    deque<int> q;
    while(t--){
    	string x; int y;
    	cin >> x;
    	if(x == "PUSHBACK"){
    		cin >> y; q.push_back(y);
		}else if(x == "PUSHFRONT"){
			cin >> y; q.push_front(y);
		}
		else if(x =="PRINTFRONT"){
			if(!q.empty()) cout <<q.front();
			else cout <<"NONE";
			cout << endl;
		}else if(x =="PRINTBACK"){
			if(!q.empty()) cout <<q.back();
			else cout <<"NONE";
			cout << endl;
		}
		else if(x == "POPFRONT"){
			if(!q.empty()){
				q.pop_front();
			}
		}
		else{
			if(!q.empty()){
				q.pop_back();
			}
		}
    }
}
