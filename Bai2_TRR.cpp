#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,x;
	cout << "Nhap do dai cua day: ";
	cin >> n;
	int arr[n];
	cout << "Nhap day: ";
	for (int i=0; i<n;i++){
		cin >> arr[i];
	}
	cout <<"Nhap so can tim: ";
	cin >> x;
	
	int l=0,r=n-1;
	int mid1, mid2;
	while (l<r){
		mid1 = l+(r-l)/3;
		mid2 = r-(r-l)/3;
		if (x<=arr[mid1]) r= mid1;
		else if (x>=arr[mid2]) l=mid2;
		else {l=mid1+1;r=mid2-1;}
	}
	if (x==arr[l]) cout <<"Chi so cua so can tim: "<<l;
	else cout <<-1 ; // khong tim thay in ra -1
	return 0;
}
