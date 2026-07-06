#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int n,k,t;
int s[100];
bool next_string(int *s,int n, int k){
    int i=k;
    while(i>=1){
        if(s[i]>s[i-1]+1){
            s[i]--;
            for(int h=i+1;h<=n;h++) s[h]=n-k+h;
            return true;
        }
        else i--;
    }
    return false;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>k>>t;
    for(int i=1;i<=k;i++) cin>>s[i];
    if(next_string(s,n,k)){
        for(int i=1;i<=k;i++) cout<<s[i]<<" ";
            cout<<"\n";
        }
        else cout<<"0\n";
}