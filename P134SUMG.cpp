#include<bits/stdc++.h>
using namespace std;
int a[15], n, ok;
void ktao(){
    for(int i=1;i<=n;i++){
        a[i]=0;
    }
}
void sinh(){
    int i=n;
    while(i>0&&a[i]==1){
        a[i]=0;
        i--;
    }
    if(i==0) ok=0;
    else{
        a[i]=1;
    }
}
int main(){
    ktao();
    
    cin>>n;
    int chua[n+1], cay[n+1];
    for(int i=1;i<=n;i++){
        cin>>chua[i]>>cay[i];
    }
    int kq=1000000000;
    ok=1;
    while(ok){
        int dchua=1,dcay=0;
        for(int i=1;i<=n;i++){
            if(a[i]){
                dchua*=chua[i];
                dcay+=cay[i];
            }
        }
        if(abs(dchua-dcay)<kq&&(dchua!=1||dcay!=0)){
            kq=abs(dchua-dcay);
            
        }
        sinh();
    }
    cout<<kq<<endl;
    return 0;
}