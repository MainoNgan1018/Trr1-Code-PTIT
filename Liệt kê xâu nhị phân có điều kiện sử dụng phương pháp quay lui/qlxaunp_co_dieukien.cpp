#include<bits/stdc++.h>
using namespace std;
int n,k,u,v,s[100];
int pos[100];
int check=0;
void output(){
    for(int i=1;i<=n;i++){
        cout<<s[i]<<" ";
    }
    cout<<"\n";
    check=1;
}
void Try(int i){
    if(pos[i]){
        if(i==n) output();
        else Try(i+1);
    }
    else{
        for(int j=0;j<=1;j++){
            s[i]=j;
            if(i==n) output();
            else Try(i+1);
        }
    } 
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>k;
    for(int i=1;i<=k;i++){
        cin>>u>>v;
        s[u]=v;
        pos[u]=1;
    }
    Try(1);
    if(!check) cout<<"0\n";
}