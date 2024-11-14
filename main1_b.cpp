#include<bits/stdc++.h>
using namespace std;
int main(){

	freopen("i1b.inp", "r", stdin);
	int n;cin>>n;
	int a[1001];	
	int res = 1; //Day con dap ung luon luon co do dai it nhat la  1 phan tu
	int vt = 1;
	for(int i=1; i<=n; i++){
		cin>>a[i];
	}	
	int count = 0;
	for(int i=2; i<=n; i++){
		if(a[i] >= a[i-1])count++;
		else{
			if(res < count){
				res = count;
				vt = i-1;
			}
			count = 1;
		}	
	}	
	for(int i=vt-res+1; i<=vt; i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
