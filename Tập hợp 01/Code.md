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
	set<int> kq;
	for(int i=0;i<c;i++) kq.insert(a[i]);
	for(int i=0;i<d;i++) kq.insert(b[i]);
	cout<<kq.size()<<"\n";
	for(int x:kq) cout<<x<<" ";
}
```
