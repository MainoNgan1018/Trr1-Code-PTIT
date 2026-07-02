```bash
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>>n;
	int a[1005], b[1005];
	int c=0,d=0;
	for(int i=1;i<=n;i++){
		int x; cin>>x;
		if(x==1) a[c++]=i;
	}
	for(int i=1;i<=n;i++){
		int x; cin>>x;
		if(x==1) b[d++]=i;
	}
	int dem=0;
	for(int i=0;i<c;i++){
		for(int j=0;j<d;j++){
			if(b[j]==a[i]){
				dem++;
				break;
			}
		}
	}
	cout<<dem<<'\n';
	for(int i=0;i<c;i++){
		for(int j=0;j<d;j++){
			if(b[j]==a[i]){
				cout<<a[i]<<" ";
				break;
			}
		}
	}
}
```
