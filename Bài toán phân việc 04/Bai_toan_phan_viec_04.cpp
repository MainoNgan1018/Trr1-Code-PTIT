#include<bits/stdc++.h>
using namespace std;
int n, a[20][20];
int s[20];
bool visited[20];
int kq=0, t=0;
int luu[20];
int max_matrix[20];
void Try(int i){
    int check=t;
    for(int h=i;h<=n;h++){
        check+=max_matrix[h];
    }
    if(check<=kq) return;
    for(int j=1;j<=n;j++){
        if(!visited[j]){
            s[i]=j;
            t+=a[i][j];
            visited[j]=true;
            if(i==n){
                if(kq<t){
                    kq=t;
                    for(int k=1;k<=n;k++) luu[k]=s[k];
                }
            }
            else Try(i+1);
            visited[j]=false;
            t-=a[i][j];
        }
    }
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
            max_matrix[i]=max(max_matrix[i],a[i][j]);
        }
    }
    for(int i=1;i<=n;i++) s[i]=i;
    Try(1);
    cout<<kq<<"\n";
    for(int i=1;i<=n;i++) cout<<luu[i]<<" ";
}