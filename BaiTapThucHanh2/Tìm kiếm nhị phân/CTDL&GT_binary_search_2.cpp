#include <iostream>
using namespace std;

int binary_search(int M[],int n,int x){
    int left, right, mid; 
    left=0; right=n-1;
    do{
        mid=(left+right)/2;
        if(M[mid] == x){
            return mid;
        }else if(M[mid] < x){
            left = mid + 1;
        }else{
            right = mid - 1;
        }
    }while(left<=right);
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
    t = binary_search(M,n,x);
    if(t == -1){
    printf("Khong tim thay phan tu x = %d", x);
    }else{
    printf("Tim thay x = %d tai vi tri %d", x, t);
    }
}