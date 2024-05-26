//3
//
//2
//
//12
//
//17
//
//10
//
//11100
//
//11101

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		long long n; cin >> n;
		queue<long long> q;
		q.push(1);
		while(!q.empty()){
			long long tmp = q.front(); q.pop();
			if(tmp%n == 0){
				cout << tmp; break;
			}
			q.push(tmp * 10);
			q.push(tmp *10 + 1);
		}
		cout << endl;
	}
}
