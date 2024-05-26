//3
//
//((()
//
//)()())
//
//()(()))))
//
// 
//
//2
//
//4
//
//6

#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--){
    int dem = 0;
    stack <int> s;
    s.push(-1);
    string x;
    cin >> x;
    for (int i = 0; i < x.size(); i++) {
      if (x[i] == '('){
        s.push(i);
      } 
      else{
        s.pop();
        if (s.size() > 0) dem = max(dem, i - s.top());
        if (s.size() == 0) s.push(i);
      }
    }
    cout << dem << endl;
  }
  return 0;
}