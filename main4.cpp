#include<bits/stdc++.h>
using namespace std;
void deQuy(int n, int a, int b, int c){
	if(n == 1) cout<<a<<" --> "<<c<<endl;
	else{
		deQuy(n-1, a, c, b);
		cout<<a<<" --> "<<c<<endl;
		deQuy(n-1, b, a, c);
	}
}
void KhuDQ(int n, int a, int b, int c){
	vector<pair<int,pair<int, int>>>buf;
	int total = 6;
	while(true){
		while(n > 1){
			buf.push_back(make_pair(n,make_pair(a,c)));
			n--;
			int t = b;
			b = c;
			c = t;
		}	
		cout<<a<<" --> "<<c<<endl;
		if(buf.size() > 0){
			n = buf.back().first;
			a = buf.back().second.first;
			c = buf.back().second.second;
			b = total - a - c;
			buf.pop_back();
			cout<<a<< " --> "<<c<<endl;

			int t=a;
			a=b;
			b=t;
			n--;
		}
		else break;
	}
}
int main(){

	freopen("i4.inp", "r", stdin);
	int n;cin>>n;
	cout<<"Phuong phap de quy:"<<endl;
	deQuy(n, 1, 2, 3);		
	cout<<"\nPhuong phap khu de quy:"<<endl;
	KhuDQ(n,1,2,3);
	return 0;
}
