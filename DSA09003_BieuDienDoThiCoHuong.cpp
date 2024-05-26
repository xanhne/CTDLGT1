//1
//
//6  9
//
//1  2
//
//2  5
//
//3  1
//
//3  2
//
//3  5
//
//4  3
//
//5  4
//
//5  6
//
//6  4
//
//1: 2
//
//2: 5
//
//3: 1 2 5
//
//4: 3
//
//5: 4 6
//
//6: 4

#include<bits/stdc++.h>
using namespace std;

int hack(char c, int a, int b){
	if(c=='+') return a+b;
	if(c == '-') return a-b;
	if(c == '*') return a*b;
	return a/b;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);

    int t=1;
    cin>>t;
    while(t--){
    	int n,m; cin >> n >> m;
    	multiset<int>mu[n+1];
    	for (int i = 1; i <= m; i++){
    		int x,y; cin >> x >> y;
    		mu[x].insert(y);
		}
		for (int i = 1; i <= n; i++){
			cout <<i<<": ";
			for(auto it : mu[i]){
				cout << it <<" ";
			}
			cout << endl;
		}
    }
}
