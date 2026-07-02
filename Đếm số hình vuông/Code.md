```bash
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n;
    cin>>n;
    ll dem=0;
    ll t=1;
    ll tong=1;
    while(tong<=n){
        dem++;
        t++;
        tong+=(t*t);
    }
    cout<<dem;
}
```
