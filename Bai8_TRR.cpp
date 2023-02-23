#include <bits/stdc++.h>
using namespace std;
int main(){
	int n ,max, m=0;
	cout << "Nhap so phan tu: ";cin >> n;
	int arr[n];
	cout << "Nhap phan tu lon nhat cua day: "; cin >> max;
	int count[max+1];
	cout << "Nhap day: ";
	for (int i=0; i<n;i++){
		cin >> arr[i];
	}
	
	for (int i=0; i<max+1;i++){
		count[i]=0;
	} //tao mang dem tan suat
	
	for (int i=0; i<n;i++){
		count[arr[i]]++;
	}
	
	for (int i=0; i<max+1;i++)
	{
		while (count[i]>0){
			arr[m]=i;
			m++;
			count[i]--;
		}
	}
	
	for (int i=0; i<n;i++){
		cout << arr[i]<<" ";
	}//in ra
	return 0;
}
