//1
//
//4
//
//2413
//
//3142

#include<bits/stdc++.h>
using namespace std;

bool used[1005];
int a[1005];
vector<int> v;
multiset<string>mu;
int n;

bool check(){
	for(int i = 2; i<= n;i++){
		if(abs(a[i]-a[i-1]) == 1) return false;
	}
	return true;
}

void ql(int i){
	for(int j = 1; j <= n;j++){
		if(!used[j]){
			used[j] = true;
			a[i] = j;
			if(i == n && check()){
				string x="";
				for(int g=1; g <= n;g++) x+=to_string(a[g]);
				mu.insert(x);
			}else ql(i+1);
			used[j] = false;
		}
	}
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);

    int t=1;
    cin>>t;
    while(t--){
    	cin >> n;
    	a[1005];
    	memset(used,false,sizeof(used));
    	mu.clear();
    	v.clear();
    	for (int i = 1; i <= n; i++) v.push_back(i);
    	ql(1);
    	for(auto i:mu) cout << i << endl;
    	
    }
}
