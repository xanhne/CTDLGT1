// 2
// 3
// -8 -66 -60

// 6
// -21 -67 -37 -18 4 -65  

// -68
// -14

#include<bits/stdc++.h>
using namespace std;

int main(){
     int t; cin>>t;
	 while(t--){
          int n;
          cin>>n;
          int a[n];
          for(int i=0;i<n;i++)cin>>a[i];
          //sort(a,a+n);
          int min=-999999;
          for(int i=0;i<n-1;i++){
               for(int j=i+1;j<n;j++){
                    if(abs(min)>abs(a[i]+a[j])){
                         min=a[i]+a[j];
                    }
               }
          }
          cout<<min<<endl;
     }
}

