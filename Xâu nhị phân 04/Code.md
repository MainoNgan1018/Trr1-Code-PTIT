```bash
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<long long> dp(n+1,0);
    long long s=pow(2,n);
    dp[0]=1;
    for(int i=1;i<k;i++){
        dp[i]=pow(2,i);
    }
    for(int i=k;i<=n;i++){
        for(int j=1;j<=k;j++){
            dp[i]+=dp[i-j];
        }
    }
    cout<<(s-dp[n]);
}
```
