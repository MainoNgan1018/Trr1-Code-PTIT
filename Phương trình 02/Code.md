```bash
#include<bits/stdc++.h>
using namespace std;
int main(){
	double a,b,c;
	cin>>a>>b>>c;
	if(a==0){
		if(b==0){
			if(c==0) cout<<"1";
			else cout<<"0";
		}
		else{
			if(-c/b>0) cout<<"1";
			else cout<<"0";
		}
	}
	else{	
		double delta=b*b-4*a*c;
		if(delta<0) cout<<"0";
		else if(delta==0){
			double x=-b/(2*a);
			if(x>0) cout<<"1";
			else cout<<"0";
		}
		else{
			double x1=(-b-sqrt(delta))/(2*a);
			double x2=(-b+sqrt(delta))/(2*a);
			if(x1>0 || x2>0) cout<<"1";
			else cout<<"0";
		}
	}
}
```
