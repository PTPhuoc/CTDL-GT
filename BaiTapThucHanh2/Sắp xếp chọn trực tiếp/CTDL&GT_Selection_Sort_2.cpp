#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
	int x = a;
	a = b;
	b = x;
}

void Selection_Sort(int a[], int n){
	int min;
	for(int i=0; i<n-1; i++){
		min = i;
		for(int j=i+1; j<n; j++){
			if (a[j] < a[min]){
				min = j;
			}
		}
		swap(a[min], a[i]);
	}
}

int main(){
    int n, M[50];
    cout << "Nhap So Mang: ";
    cin >> n;
    for(int i = 0; i <= n; i++){
        cout << "M[" << i << "] = ";
        cin >> M[i];
    }

    Selection_Sort(M,n);

	for (int i=0; i < n; i++){
        cout << M[i] << " ";
      }
}