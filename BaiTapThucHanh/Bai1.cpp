#include <iostream>

using namespace std;

int TinhTongSoChan(int T[], int i, int n){
    if(i == n){
        return 0;
    }else if(T[i] % 2 == 0 ){
       return TinhTongSoChan(T, i + 1, n) + T[i];
    }else{
        return TinhTongSoChan(T, i + 1, n) + 0;
    }
}

int main(){
    int N,S;
    int T[50];
    cout << "Nhap So Mang Can Tinh: ";
    cin >> N;
    while(N < 0){
        cout << "Nhap Sai\nNhap Lai:";
        cin >> N;
    }
    for(int i = 0; i <= N; i++){
        cout << "Nhap T[" << i << "] = ";
        cin >> T[i];
    }

    S = TinhTongSoChan(T, 0, N);

    cout << "Tong Cac So Chan La: " << S ;
}