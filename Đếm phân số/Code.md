```bash
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int phi[10005];
    for(int i=1;i<=n;i++){
        phi[i]=i;
    }
    for(int i=2;i<=n;i++){
        if(phi[i]==i){
            for(int j=i;j<=n;j+=i){
                phi[j]=(phi[j]/i)*(i-1);
            }
        }
    }
    int kq=1;
    for(int i=1;i<=n;i++){
        kq+=(phi[i]);
    }
    cout<<kq;
}
```
Giải thích :
/* Phi ham Euler la so luong cac so tu 1->n ma nguyen to cung nhau vs n

Cthuc tong quat:

D = n*(1-1/p1)*(1-1/p2)*...*(1-1/pk)

p1,..pk la cac uoc so nt khac nhau cua n

Giả sử ta tính lại $\phi(6)$. Số 6 có các ước nguyên tố là 2 và 3.

Ban đầu ta có 6 số (từ 1 đến 6).

Vì 6 chia hết cho 2, nên một nửa số lượng số sẽ là bội của 2 (bị loại).

Ta nhân với $(1 - \frac{1}{2})$ để giữ lại những số không chia hết cho 2.

vs 3 cx tuong tu
*/
