#include <iostream>
using namespace std;

void Swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void InterchangeSort(int a[], int n){   
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if(a[i] > a[j])
                Swap(a[i], a[j]);
}

int main(){
    int n, M[50];
    cout << "Nhap So Mang: ";
    cin >> n;
    for(int i = 0; i <= n; i++){
        cout << "M[" << i << "] = ";
        cin >> M[i];
    }

    InterchangeSort(M,n);
}