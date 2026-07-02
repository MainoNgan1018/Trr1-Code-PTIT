```bash
#include<bits/stdc++.h>
using namespace std;
bool nextstring(vector<int> &s,int n){
    int i=n-1;
    while(i>=0){
        if(s[i]==1){
            s[i]=0;
            return true;
        }
        else{
            s[i]=1;
            i--;
        }
    }
    return false;
}
int main(){
    int n,t;
    cin>>n>>t;
    vector<int> s(n);
    bool can_generate = true;
    for(int i=0;i<n;i++) cin>>s[i];
    for(int i=1;i<=t;i++){
        if(nextstring(s,n)){
    		for(int j=0;j<n;j++){
    			cout<<s[j];
    			if(j<n-1) cout<<" ";
			}
			cout<<"\n";
        }
        else{
            cout<<"0\n";
        }
    }
}
```
