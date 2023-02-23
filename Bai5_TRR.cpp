#include <bits/stdc++.h>
using namespace std;
 
int binarySearch(int a[], int x, int st, int en)
{
	int mid, location;
    while (st<en){
    	mid = (st+en)/2;
    	if (a[mid] == x) {return mid+1;}
    	if (a[mid] > x) en = mid - 1;
    	else st = mid+1;
	}
	if (a[st] > x) location = st;
	else location = st+1;
	return location;
}

void insertionSort(int a[], int n)
{
    int i, pos, j, tmp;
 
    for (i = 1; i < n; i++)
    {
        j = i - 1;
       	tmp = a[i];
        pos = binarySearch(a, tmp, 0, j);
 
        while (pos <= j)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = tmp;
    }
}
 
int main()
{	
	int n;
	cout << "Nhap so phan tu cua day: ";
	cin >> n;
	int arr[n];
	cout << "Nhap day: ";
	for (int i=0; i<n;i++){
		cin >> arr[i];	
	} 
 
    insertionSort(arr, n);
 	cout << "Day sau khi sap xep: ";
    for (int i = 0; i < n; i++)
        cout << arr[i]<<" ";
 
    return 0;
}
