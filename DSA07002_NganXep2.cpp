//9
//
//PUSH 1
//
//PUSH 2
//
//POP
//
//PRINT
//
//PUSH 3
//
//PRINT
//
//POP
//
//POP
//
//PRINT
//
// 
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
    	if(x == "PUSH"){
    		cin >> y; q.push_front(y);
		}else if(x =="PRINT"){
			if(!q.empty()) cout <<q.front();
			else cout <<"NONE";
			cout << endl;
		}else if(!q.empty())q.pop_front();
    }
}
