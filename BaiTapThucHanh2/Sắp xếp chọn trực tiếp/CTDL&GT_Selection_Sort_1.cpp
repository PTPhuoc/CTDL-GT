#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
	int x = a;
	a = b;
	b = x;
}

void Selection_Sort(int a[], int n){
	int min;//vị trí phần tử nhỏ nhất trong dãy hiện hành
	for(int i=0; i<n-1; i++){
		min = i;
		for(int j=i+1; j<n; j++){
			if (a[j] < a[min]){
				min = j;//ghi nhận vị trí phần tử nhỏ nhất
			}
		}
		swap(a[min], a[i]);
	}
}