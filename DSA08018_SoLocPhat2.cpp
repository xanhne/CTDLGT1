//2
//
//2
//
//3
//
//6
//
//6 8 66 68 86 88
//
//14
//
//6 8 66 68 86 88 666 668 686 688 866 868 886 888

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		long long n; cin >> n;
		queue<string>q;
		q.push("6"); q.push("8");
		vector<string>v;
		v.push_back("6"); v.push_back("8");
		while(1){
			vector<string>ve;
			while(!q.empty()){
				string x1 = q.front() + "6";
				ve.push_back(x1);
				string x2 = q.front() + "8";
				ve.push_back(x2);
				q.pop();
			}
			int ok = 0;
			for(string i : ve){
				if(i.size() <= n){
					q.push(i); v.push_back(i);
				}else{
					ok = 1;
					break;
				}
			}
			if(ok) break;
		}
		cout << v.size() << endl;
		for(string i:v) cout << i <<" ";
		cout << endl;
	}
}


