```bash
#include<bits/stdc++.h>
using namespace std;
int n, a[35][35], s[35];
bool visited[35];
int kq=10e7,t=0;
int luu[35];
int min_row=1e7;
void Try(int i){
    if(t+(n-i+1)*min_row>=kq) return;
    for(int j=1;j<=n;j++){
        if(!visited[j]){
            s[i]=j;
            t+=a[s[i-1]][j];
            visited[j]=true;
            if(i==n){
                int total=t+a[j][1];
                if(kq>total){
                    kq=total;
                    for(int k=1;k<=n;k++) luu[k]=s[k];
                }
            } 
        else Try(i+1);
        visited[j]=false;
        t-=a[s[i-1]][j];
        }  
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
            if(i!=j) min_row=min(min_row,a[i][j]);
        }
    }
    s[1]=1;
    visited[1]=true;
    Try(2);
    cout<<kq<<"\n";
    for(int i=1;i<=n;i++) cout<<luu[i]<<" ";
}
```
