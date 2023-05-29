#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a+1, a+n,greater<int>());
    long long sum=1ll*a[0];
    for(int i=1;i<n;i++){
        if(i<=k)sum+=1ll*a[i];
        else sum-=1ll*a[i];
    }
    cout<<sum<<endl;
}