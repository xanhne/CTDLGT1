#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);

    int t=1;
    //cin>>t;
    while(t--){
    	multiset<string>m;
    	vector<string> v;
		v.push_back("02");
		v.push_back("20"); 
		v.push_back("22");
    	for(int i = 2000; i <= 10000; i++){
    		int ok = 1;
    		string x = to_string(i);
    		for(char c:x){
    			if(c != '0' && c != '2'){
    				ok = 0; break;
				}
			}
			if(ok){
				string k = "02";
				for(auto g:v){
					string z = "";
					z = g + k + x;
					m.insert(g +"/"+k+"/"+x);
				}
			}
		}
		
		for(string k:m) cout << k << endl;
    }
}
