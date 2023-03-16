#include <bits/stdc++.h>
using namespace std;
int ones(string s, int pos){
	if (pos < 0) return 0;
	if (s[pos]=='1') return ones(s,pos-1)+1;
	return ones(s,pos-1);
}
int main(){
	string s;
	cin >> s;
	int n = s.length();
	cout << ones(s,n-1);
	return 0;
}
