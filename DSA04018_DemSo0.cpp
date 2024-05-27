// 3
// 12
// 0 0 0 0 0 0 0 0 0 1 1 1 
// 5
// 0 0 0 0 0
// 6
// 1 1 1 1 1 1

// 9
// 5
// 0

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int m = lower_bound(a, a + n, 1) - a;
        cout << m << endl;
    }
}