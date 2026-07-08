#include<bits/stdc++.h>
using namespace std;
int n,k,t;
int s[100];
void output(){
    for(int i=1;i<=k;i++){
        cout<<s[i]<<" ";
    }
    cout<<"\n";
}
void Try(int i){
    for(int j=s[i-1]+1;j<=n-k+i;j++){
        s[i]=j;
        if(i==k){
            if(s[k]==t) output();
        } 
        else Try(i+1);
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>k>>t;
    if(t>n){
        cout<<"0\n";
        return 0;
    }
    Try(1);
}