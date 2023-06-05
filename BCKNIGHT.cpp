#include<bits/stdc++.h>
using namespace std;

int n, a[12][12];
int row[8]={2,2,1,1,-1,-1,-2,-2};
int col[8]={1,-1,2,-2,2,-2,1,-1};
bool flag=false;

void print(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<a[i][j];
            cout<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void try(int i, int x, int y){
    if(flag) return;
    int u,v;
    for(int k=0;k<8;k++){
        u=x+row[k];
        v=y+col[k];
        if(u>=1&&u<=n&&v>=1&&v<=n&&a[u][v]==0){
            a[u][v]=i;
            if(i<n*n){
                try(i+1,u,v);
                a[u][v]=0;
            }
            else{
                print();
                flag=true;
            }
        }
    }
}
int main(){
    int x, y;
    cin>>n>>x>>y;
    a[x][y]=1;
    try(2,x,y);
    return 0;

}