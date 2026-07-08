#include<bits/stdc++.h>
using namespace std;
//hoan vi
int n, a[20][20];
int s[20];
bool visited[20];
int kq=10e7, t=0;
int luu[20];
void Try(int i){
    for(int j=1;j<=n;j++){
        if(!visited[j]){
            s[i]=j;
            t+=a[i][j];
            if(t<kq){
                if(i==n){
                    kq=t;
                    for(int k=1;k<=n;k++) luu[k]=s[k];
                }
                else{
                    visited[j]=true;
                    Try(i+1);
                    visited[j]=false;
                }
            }
            t-=a[i][j]; 
        }
    }
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=1;i<=n;i++) s[i]=i;
    Try(1);
    cout<<kq<<"\n";
    for(int i=1;i<=n;i++) cout<<luu[i]<<" ";
}