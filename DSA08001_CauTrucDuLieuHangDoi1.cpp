//1
//
//14
//
//3 1
//
//3 2
//
//3 3
//
//5
//
//6
//
//4
//
//4
//
//4
//
//4
//
//4
//
//3 5
//
//3 6
//
//5
//
//1
//
//1
//
//3
//
//5
//
//2

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);

    int t=1;
    cin>>t;
    while(t--){
    	int n; cin >> n;
    	int x,y;
    	deque<int>q;
    	while(n--){
    		cin >> x;
    		if(x == 1){
    			cout << q.size()<<endl;
			}else if(x == 2){
				if(q.empty()) cout <<"YES\n";
				else cout <<"NO\n";
			}
			else if(x == 3){
				cin >> y; q.push_back(y);
			}else if(x == 4){
				if(!q.empty()) q.pop_front();
			}else if(x == 5){
				if(!q.empty()) cout << q.front();
				else cout << -1;
				cout << endl;
			}else{
				if(!q.empty()) cout << q.back();
				else cout << -1;
				cout << endl;
			}
		}
		cout << endl;
    }
}
