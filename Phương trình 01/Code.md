```bash
#include<bits/stdc++.h>
using namespace std;
int main(){
	double a,b;
	cin>>a>>b;
	if(a==0){
		if(b==0) cout<<"1";
		else cout<<"0";
	}
	else{	
		if(-b/a <0) cout<<"1";
		else cout<<"0";
	}
}
```
