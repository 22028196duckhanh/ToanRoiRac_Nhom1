#include <bits/stdc++.h>
using namespace std;
int ones(string s){
	if (s=="") return 0;
	return ones(s.substr(0,s.length()-1)) + s[s.length()-1] - '0';	
}
int main(){
	string s;
	cin >> s;
	cout << ones(s);
	return 0;
}
