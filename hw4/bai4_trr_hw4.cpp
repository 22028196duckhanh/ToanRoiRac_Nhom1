#include <bits/stdc++.h>
using namespace std;
void extend_euclid(int a, int b,int &x,int&y){ // a > b
	int m=a, n=b;
	int xm=1, ym = 0,xn=0,yn=1,xr,yr;
	int q,r;
	while (n!=0){
		q= m / n;
		r= m % n;
		xr = xm - xn * q;
		yr = ym - yn * q;
		m = n ; xm = xn; ym = yn;
		n = r ; xn = xr; yn = yr;
	}
	x = xm; y = ym;
}
int main(){
	int a, m,x,y; // tim nghich dao cua a modulo m
	cout << "Nhap so can tim nghich dao: ";
	cin >> a;
	cout << "Nhap so modulo: ";
	cin >> m;
	if (a>m) {
		extend_euclid(a,m,x,y);
		cout << (x+m)%m;
		return 0;
		}
	else {
		extend_euclid(m,a,x,y);
		cout << (y+m)%m;
		return 0;
	}
	return 0;
}
