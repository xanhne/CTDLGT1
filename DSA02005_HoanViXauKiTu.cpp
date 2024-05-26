//2
//AB
//
//ABC
//
//AB BA
//
//ABC ACB BAC BCA CAB CBA

#include<bits/stdc++.h>
using namespace std;

#define ms(s,n) memset(s,n,sizeof(s))

bool used[1005];
int a[1005];
int n;
vector<string>v;
string s;

void hv(int i){
	for(int j = 1; j <= s.size(); j++){
		if(!used[j]){
			a[i] = j;
			used[j] = true;
			if(i == s.size()){
				string x = "";
				for(int g = 1; g <= s.size();g++){
					cout << s[a[g]-1];
				}
				cout <<" ";
			}else hv(i+1);
			used[j] = false;
			
 		}
	}
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);

    int t=1;
    cin>>t;
    while(t--){
    	a[1005];
    	cin >> s;
    	ms(used,false);
    	hv(1);
    	cout << endl;
    }
}
