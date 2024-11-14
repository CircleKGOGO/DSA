#include<bits/stdc++.h>
#define ll long long 
using namespace std;

ll pow1(ll x, ll m, ll y){
	ll res = 1;
      	while(m){
	       if(m&1)res = (res*x)%y;
	       x = (x*x)%y;
	       m/=2;
       }	       
       return res;
}	


ll pow2(ll x, ll m, ll y){
	if(x == 1)return 1;
	if(m == 0)return 1;
	if(m == 1)return x;
	if(x == 0)return 0;
	
	if(m % 2 == 0)return (pow2(x, m/2, y)%y * pow2(x, m/2, y)%y)%y;
	else return ((pow2(x, (m-1)/2, y)%y * pow2(x, (m-1)/2, y)%y)%y * x)%y;
}
int main(){

	freopen("i2.inp", "r", stdin);
	long long x;cin>>x;
	long long m;cin>>m;
	long long y;cin>>y;
	cout<<pow1(x,m,y)<<" ";
	cout<<pow2(x,m,y);
	return 0;
}
