#include<bits/stdc++.h>
using namespace std;
bool isOperate(char c){
	return !isdigit(c) && !isalpha(c);
}//Tinh ca ngoac va dau
int piority(char c){
	if(c == '-' || c == '+')return 1;
	else if(c == '*' || c == '/')return 2;
	else if(c == '^')return 3;
	return 0; // Dau ngoac
}
string infixToPosfix(string s){
	s = '(' + s + ')';
	int n = s.length();
	stack<char> st;
	string output = "";
	for(int i=0; i<n; i++){
		char c = s[i];
		if(isdigit(c) || isalpha(c)){
			output += c;	
		}
		else if(c == '('){
			st.push(c);
		}
		else if(c == ')'){
			while(st.top() != '('){
				output+=st.top();
				st.pop();
			}
			st.pop();
		}
		else{
			if(isOperate(st.top())){
				while(piority(st.top()) > piority(c)){
					output+=st.top();
					st.pop();
				}
				st.push(c);
			}
		}
	}	
	while(!st.empty()){
		output+=st.top();
		st.pop();
	}
	return output;
}
string infixToPrefix(string s){
	int n = s.length();
	reverse(s.begin(), s.end());
	for(int i=0; i<n; i++){
		if(s[i] == ')') s[i] = '(';
		else if(s[i] == '(') s[i] = ')';
	}
	s = infixToPosfix(s);
	reverse(s.begin(), s.end());
	return s;
}
int main(){
	freopen("i5.inp" ,"r", stdin);
	string s;cin>>s;
	cout<<infixToPrefix(s);
	return 0;
}
