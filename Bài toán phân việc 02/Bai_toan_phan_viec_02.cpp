#include<bits/stdc++.h>
using namespace std;
//hoan vi
int n, a[20][20];
int s[20];
bool visited[20];
int kq=0, t=0;
int luu[20];
void Fix(){
    for(int i=1;i<=n;i++){
        t+=a[i][s[i]];
    }
    if(kq<t){
        kq=t;
        for(int i=1;i<=n;i++) luu[i]=s[i];
    }
    t=0;
}
void Try(int i){
    for(int j=1;j<=n;j++){
        if(!visited[j]){
            s[i]=j;
            visited[j]=true;
            if(i==n) Fix();
            else Try(i+1);
            visited[j]=false;
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