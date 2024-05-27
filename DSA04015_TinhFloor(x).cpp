// 3
// 7 0
// 1 2 8 10 11 12 19
// 7 5
// 1 2 8 10 11 12 19
// 7 10
// 1 2 8 10 11 12 19

// -1
// 2
// 4

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
        vector<long long> a(n + 2);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        a[n + 1] = 1e18;
        int ans = lower_bound(a.begin(), a.end() - 1, k) - a.begin();
        if (a[ans] != k)
            ans--;
        if (ans != -1)
            ans++;
        cout << ans << endl;
    }
}