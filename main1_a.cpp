#include<bits/stdc++.h>
using namespace std;
int main(){

	freopen("i.inp", "r", stdin);
	int n;cin>>n;
	int a[1001];
	int s = 0;
	for(int i=1; i<=n; i++){
		cin>>a[i];
		s+=a[i];
	}
	for(int i=1; i<=n; i++){
		if(a[i] > s - a[i]){
			cout<<i-1;
			break;
		}
	}
	return 0;
}
