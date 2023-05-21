#include<bits/stdc++.h>
using namespace std;
int bsearch( int a[], int l, int r, int x ) {
    int ans = -1;
    while(l <= r) {
        int mid = (l+ r) / 2;
        if (a[mid] <= x) {
		    ans=mid; 
            l = mid + 1;  
		}  
		else {
			r=mid-1;
		}
    }
    return ans;
}
int main(){
	int n,m;
	cin>>n>>m;
	int a[n+1],b[m+1];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<m;i++){
		cin>>b[i];
	}
	sort(a, a+n);
	for(int i=0;i<m;i++){
		int k=bsearch(a,0,n-1,b[i]);
		cout<<k+1<<endl;
	}
	return 0;
} 
