#include<bits/stdc++.h>
using namespace std;
long long gt(int n){
    if(n==0) return 1;
    else return 1ll*n*gt(n-1);
}
int main(){
    int n;
    do{
        cin>>n;
        if(n==0) break;
        cout<<gt(n)<<endl;
    }
    while(1);
    return 0;
}