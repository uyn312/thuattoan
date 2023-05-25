#include<bits/stdc++.h>
using namespace std;
set<int>s1;
set<int>s2;
vector<int>v;

void chuyen_doi(){
    for(int x : s1){
        v.push_back(x);
    }
}
void xuli(){
    int n=s1.size();
    chuyen_doi();
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                int tong=v[i]+v[j]+v[k];
                s2.insert(tong);
            }
        }
    }
}

int main(){
    int n,m;
    cin>>n>>m;
    int a[n];
    
    for(int i=0;i<n;i++){
        cin>>a[i];
        s1.insert(a[i]);
    }
    xuli();
    int max=0;
    for(int y : s2){
        if(y>max&&y<=m)max=y;

    }
    cout<<max<<endl;
}