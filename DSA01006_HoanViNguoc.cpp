//2
//
//2
//
//3
//
//21 12 
//
//321 312 231 213 132 123 

#include<bits/stdc++.h>
using namespace std;

bool used[1005];
int a[1005];
int n;
vector<string>v;

void hv(int i){
	for(int j = 1; j <= n; j++){
		if(!used[j]){
			a[i] = j;
			used[j] = true;
			if(i == n){
				string x = "";
				for(int g = 1; g <= n;g++){
					x += to_string (a[g]);
				}
				v.push_back(x);
			}else hv(i+1);
			used[j] = false;
			
 		}
	}
}

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);

    int t=1;
    cin>>t;
    while(t--){
    	a[1005];
    	v.clear();
    	cin >> n;
    	memset(used,false,sizeof(used));
    	hv(1);
    	for(int i = v.size()-1; i >= 0; i--) cout << v[i] <<" ";
    	cout << endl;
    }
}

