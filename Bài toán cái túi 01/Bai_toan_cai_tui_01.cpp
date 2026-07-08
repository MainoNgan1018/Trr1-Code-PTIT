#include<bits/stdc++.h>
using namespace std;
int n,b,a[25],value[25],weight[25];
int t,k=0;
int kq, luu[25];
bool next_tring(int s[], int n){
    int i=n;
    while(i>=1){
        if(!s[i]){
            s[i]=1;
            return true;
        }
        else{
            s[i]=0;
            i--;
        }
    }
    return false;
}
int main(){
    cin>>n>>b;
    int u,v;
    for(int i=1;i<=n;i++){
        cin>>u>>v;
        weight[i]=u;
        value[i]=v;
    }
    do{
        for(int i=1;i<=n;i++){
            t+=a[i]*weight[i];
            k+=a[i]*value[i];
        }
        if(t<=b && kq<=k){
            kq=k;
            for(int i=1;i<=n;i++){
                luu[i]=a[i];
            }
        } 
        t=0;
        k=0;
    }while(next_tring(a,n));
    cout<<kq<<"\n";
    for(int i=1;i<=n;i++) cout<<luu[i]<<" ";
}