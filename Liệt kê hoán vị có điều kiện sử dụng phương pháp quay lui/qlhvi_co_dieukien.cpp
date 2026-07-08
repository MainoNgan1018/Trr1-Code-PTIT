#include<bits/stdc++.h>

using namespace std;
int n,k;
vector<int>a(25,0);
vector<int>vs(25,0);
vector<int>pos(25,0);
int check=0;
void print(){
	for(int i=1;i<=n;i++){
		cout<<a[i];
		if(i<n) cout<<" ";
	}
	cout<<"\n";
	check=1;
}
void Try(int i){
	if(pos[i]){
		if(i==n) print();
		else Try(i+1);
	}
	else{
		for(int j=1;j<=n;j++){
			if(!vs[j]){
				vs[j]=1;
				a[i]=j;
				if(i==n) print();
				else Try(i+1);
				vs[j]=0;
			}
		}
	}
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>k;
	int tmp=0;
	for(int i=1;i<=k;i++){
		int u,v;
		cin>>u>>v;
		if(u<1||u>n||v<1||v>n){
            tmp=1;
        }
        else{
            if(pos[u]||vs[v]){
                tmp=1;
            }
			pos[u]=1;
			a[u]=v;
			vs[v]=1;
		}
	}
	if(tmp){
		cout<<"0\n";
		return 0;
	}
	Try(1);
	if(!check) cout<<"0\n";
}
/*
#include<bits/stdc++.h>
using namespace std;
int n,k,u,v;
vector<bool> visited(100);
vector<bool> pos(100);
int a[100];
void output(){
    for(int i=1;i<=n;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}
void Try(int i){
    if(pos[i]){
        if(i==n) output();
        else Try(i+1);
    }
    else{
        for(int j=1;j<=n;j++){
        if(!visited[j]){
                a[i]=j;
                visited[j]=true;
                if(i==n) output();
                else Try(i+1);
                visited[j]=false;
            } 
        }
    }
}
int main(){
    cin>>n>>k;
    for(int i=1;i<=k;i++){
        cin>>u>>v;
        a[u]=v;
        visited[v]=true;
        pos[u]=true; 
    }
   Try(1);
}
*/