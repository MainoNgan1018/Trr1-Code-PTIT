```bash
#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll ucln(ll a, ll b){
    if(a==0 || b==0) return a+b;
    while(b){
        ll r=a%b;
        a=b;
        b=r;
    }
    return a;
}
int main(){
    ll a,b,k,m;
    cin>>a>>b>>k>>m;
    if (a>b) return 0;
    ll bcnn=(k/ucln(k,m))*m;
    ll x=(b / k) - ((a - 1) / k);
    ll y=(b / m) - ((a - 1) / m);
    ll z=(b / bcnn) - ((a - 1) / bcnn);
    ll kq= x+y-z;
    cout<<kq;
}
```
