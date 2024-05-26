// 2 
// 5 16
// 2 4 7 9 16
// 7 98
// 1 22 37 47 54 88 96

// 1
// -1

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int a[n];
        int ok = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == x)
                ok = 1;
        }
        if (ok)
            cout << 1;
        else
            cout << -1;
        cout << endl;
    }
    return 0;
}

