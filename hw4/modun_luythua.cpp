#include <bits/stdc++.h>
using namespace std;
string dectobin(int n){
	string res="";
	while (n>0){
		if (n%2==0) res="0"+res;
		else res = "1"+res;
		n/=2;
	}
	if (res[0]=='0') res.erase(res.begin());
	return res;
}
int modun(int a, int b,int c){
	int x= 1, power = a%c;
	string s=dectobin(b);
	int len = s.length();
	for (int i=len-1 ; i>=0 ; i--){
		if (s[i]=='1') x= (x*power)% c;
		power = (power*power) % c;
	}
	return x;
}
int main(){
	int a , b, c;
	while (cin >> a >> b >> c)
	cout << modun(a,b,c)<<endl;
	return 0;
}
