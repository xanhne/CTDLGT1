// 2

// 5 3

// 1 2 3 4 5

// 6 5

// 0 1 2 3 9 10

// 3

// NO

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--){
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        int m = lower_bound(a, a + n, k) - a;
        if (a[m] != k)
            cout << "NO" << endl;
        else
            cout << m + 1 << endl;
    }
}