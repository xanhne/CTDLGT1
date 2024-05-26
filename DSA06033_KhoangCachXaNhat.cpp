// 3

// 9

// 34 8 10 3 2 80 30 33 1

// 6

// 1 2 3 4 5 6

// 6

// 6 5 4 3 2 1

// 6

// 5

// -1

#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		vector<int> v;
		int n; cin >> n;
		for(int i = 0; i < n; i++){
			int x; cin >> x; v.push_back(x);
		}
	    vector<int> maxFromEnd(n + 1, INT_MIN);
	    for (int i = v.size() - 1; i >= 0; i--) {
	        maxFromEnd[i] = max(maxFromEnd[i + 1], v[i]);
	    }
	 
	    int result = 0;
	    int ok = 0;
	    for (int i = 0; i < v.size(); i++) {
	        int low = i + 1, high = v.size() - 1, ans = i;
	 
	        while (low <= high) {
	            int mid = (low + high) / 2;
	 
	            if (v[i] < maxFromEnd[mid]) {
	            	ok = 1;
	                ans = max(ans, mid);
	                low = mid + 1;
	            }
	            else {
	                high = mid - 1;
	            }
	        }
	        result = max(result, ans - i);
	    }
	    if(ok) cout << result;
	    else cout << - 1;
	    cout << endl;
	}
}
