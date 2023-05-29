#include<bits/stdc++.h>
using namespace std;
int n, ok, a[4];
void ktao(){
    for(int i=1;i<=3;i++){
        a[i]=i;
    }
}
void sinh(){
    int i=3;
    while(a[i]==n-3+i){
        i--;
    }
    if(i==0) ok=0;
    else {
        a[i]++;
        int tmp=a[i];
        while(i<=3){
            a[i++]=tmp++;
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        ktao();
        int m, kq, kc=300000;
        cin>>n>>m;
        int b[n+1];
        for(int i=1;i<=n;i++){
            cin>>b[i];
        }
        ok=1;
        while(ok){
            int sum=0;
            for(int i=1;i<=3;i++){
                sum+=b[a[i]];
            }
            if(sum<=m&&m-sum<kc){
                kc=m-sum;
                kq=sum;
            }
            sinh();
        }
        cout<<kq<<endl;
    }
    return 0;
}