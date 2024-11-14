#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int tong(int n, int a[]){
	if(n == 0)return 0;
	return a[n] + tong(n-1, a);
}
int main(){

	freopen("i3.inp", "r", stdin);
	int n;cin>>n;
	int a[1001];
	for(int i=1; i<=n; i++){
		cin>>a[i];
	}
	cout<<tong(n,a);	
	return 0;
}
