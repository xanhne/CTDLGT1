//2
//
//2
//
//5
//
//1 10
//
//1 10 11 100 101

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);

    int t=1;
    cin>>t;
    while(t--){
    	int n,k; cin >> n;
    	k = n;
    	string x = "";
    	while(n!=0){
    		char c = (n%2) + '0';
    		x = x + c;
    		n/=2;
		}
		reverse(x.begin(),x.end());
		queue<string>q; q.push("1"); 
		cout << 1 << " ";
		while(1){
			vector<string>v;
			int ok = 0;
			while(!q.empty()){
				v.push_back(q.front() + "0");
				v.push_back(q.front() + "1"); q.pop();
			}
			for(string i: v){
				cout << i <<" "; q.push(i);
				if(i == x){
					ok = 1; break;
				}
			}
			if(ok) break;
		}
		cout << endl;
    }
}
