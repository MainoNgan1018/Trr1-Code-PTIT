###Cách 1:
```bash
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n,s;
    cin>>n>>s;
    if(s>n-s) s=n-s;
    ll kq=1;
    for(int i=1;i<=s;i++){
        kq=kq*(n-i+1)/i;
    }
    cout<<kq;
}
```
###Cách 2:
```bash
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,s;
    cin>>n>>s;
    vector<vector<long long>> dp(n+1,vector<long long>(n+1,0));
    dp[0][0]=1;
    for(int i=1;i<=n;i++) dp[i][0]=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            dp[i][j]=dp[i-1][j-1]+ dp[i-1][j];
        }
    }
    cout<<dp[n][s];
}
```
