#include<bits/stdc++.h>
using namespace std;
const int mod=1000000007;
long long lt(long long a, long long b){
    if(b==0) return 1;
    else{
    a=a%mod;
    long long res=1;
    while(b){
        if(b%2){
            res*=a;
            res%=mod;
        }
        a*=a;
        b/=2;
    }
    return res;}
}
int main(){
    long long a,b;
    do{
        cin>>a>>b;
        if(a==0&&b==0) break;
        cout<<lt(a,b)<<endl;
    }
    while(1);
    return 0;
}