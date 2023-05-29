#include<bits/stdc++.h>
using namespace std;
long long fibo(int n){
    if(n==0||n==1) return 1ll*n%1000000007;
    else return 1ll*(fibo(n-1)+fibo(n-2))%1000000007;
}
int main(){
    int n;
    cin>>n;
    cout<<fibo(n);
    return 0;
}