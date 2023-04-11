#include <iostream>
using namespace std;

int linear_search(int A[], int n, int x){
    int i;
    for (i = 0; i < n; i++)
        if (A[i] == x){
            return i;
        }
    return -1;
}

int main(){
    int n, t, x, M[50];
    cout << "Nhap So Mang: ";
    cin >> n;
    for(int i = 0; i <= n; i++){
        cout << "M[" << i << "] = ";
        cin >> M[i];
    }
    cout << "Nhap So Can Tim: ";
    cin >> x;
    t = linear_search(M,n,x);
    if(t == -1){
    printf("Khong tim thay phan tu x = %d", x);
    }else{
    printf("Tim thay x = %d tai vi tri %d", x, t);
    }
}