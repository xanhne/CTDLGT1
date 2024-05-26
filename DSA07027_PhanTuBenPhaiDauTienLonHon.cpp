//3
//
//4
//
//4 5 2 25
//
//3
//
//2 2 2
//
//4
//
//4 4 5 5
//
//5 25 25 -1
//
//-1 -1 -1
//
//5 5 -1 -1

#include<bits/stdc++.h>
using namespace std;

#define ms(s,n) memset(s,n,sizeof(s))

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);

    int t=1;
    cin>>t;
    while(t--){
    	int n; cin >> n;
    	bool used[100005];
    	ms(used,false);
    	int pre[100005];
    	int a[n];
    	for (int i = 0; i < n; i++) cin >> a[i];
    	stack<int>st;
    	st.push(0);
    	for (int i = 1; i <= n-1; i++){
    		while(!st.empty() && a[i] > a[st.top()]){
    			used[st.top()] = true;
    			pre[st.top()] = i;
    			st.pop();
			}
			st.push(i);
		}
		for (int i = 0; i < n; i++){
			if(!used[i]) cout <<-1<<" ";
			else cout <<a[pre[i]]<<" ";
		}
		cout << endl;
    }
}
