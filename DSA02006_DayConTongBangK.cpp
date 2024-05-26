//2
//5 50
//
//5  10 15 20  25
//8  53
//15  22  14  26  32  9  16  8
//
//[5 10 15 20] [5 20 25] [10 15 25]
//[8 9 14 22] [8 14 15 16] [15 16 22]

#include<bits/stdc++.h>
using namespace std;

long long n,k; 
int a[105];
vector<int> v;
int ok;
bool used[1005];

void ql(int id, int vt, int sum){
	if(sum == k){
		cout <<"[";
		for(int g = 0; g < id; g++){
			if(g!=id-1) cout << a[g]<<" ";
			else cout << a[g];
		}
		cout << "] ";
		ok = 1; 
		return ;
	}
	for(int i = vt; i < v.size(); i++){
		if(!used[i] && sum + v[i] <= k){
			used[i] = true;
			a[id] = v[i];
			ql(id+1,i+1,sum + v[i]);
			used[i] = false;
		}
	}
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);

    int t=1;
    cin>>t;
    while(t--){
    	cin >> n >> k;
    	v.clear();
    	for (int i = 0; i < n; i++){
    		int x; cin >> x; v.push_back(x);
		}
		ok = 0;
		memset(used,false,sizeof(used));
		sort(v.begin(),v.end());
		ql(0,0,0);
		if(!ok) cout << -1;
		cout << endl;
    }
}
