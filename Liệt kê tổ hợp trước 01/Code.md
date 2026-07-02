```bash
#include<bits/stdc++.h>

using namespace std;
int n,k;
int t;
vector<int>a(105,0);
vector<int>vs(105,0);
vector<int>pos(105,0);
int check=0;
void print(){
	for(int i=1;i<=k;i++){
		cout<<a[i];
		if(i<k) cout<<" ";
	}
	cout<<"\n";
}

int comb(){
	int i=k;
	a[0]=0;
	while(i>0 && a[i]==a[i-1]+1){
		i--;
	}
	if(i==0) return 0;
	a[i]--;
	for(int j=i+1;j<=k;j++){
		a[j]=a[j-1]+1;
	}
	return 1;
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>k;
	int tmp=0;
	for(int i=1;i<=k;i++) cin>>a[i];
		if(comb()) print();
		else{
			cout<<"0\n";
		//	break;
		}
}
```
