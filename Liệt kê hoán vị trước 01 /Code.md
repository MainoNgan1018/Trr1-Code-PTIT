```bash
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int> s(n);
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    int h=s.size();
    int i= h-2;
    while(i>=0 && s[i]<=s[i+1]) i--;
    if(i<0) cout<<"0";
    else{
        int j=h-1;
        while(j>i && s[j]>=s[i]) j--;
        swap(s[i],s[j]);
        reverse(s.begin()+i+1,s.end());
        for(auto x:s){
            cout<<x<<" ";
        }
    }
}
```
