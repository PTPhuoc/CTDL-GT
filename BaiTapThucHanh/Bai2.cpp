#include <iostream>
#include <cmath>

using namespace std;

int GiaiThua(int n){
    if( n == 1){
        return 1;
    }else{
        return n*GiaiThua(n - 1);
    }
}


int Tinh(int x, int n){
    if(x == 0; n == 0){
        return 0;
    }else{
        int N = GiaiThua(n);
        return pow(x,n)/N + Tinh(x - 1, n - 1);
    }
}

int main(){
    int x, n, S;
    cout << "S(x, n) = x + x^2/2! + x^3/3! + ... + x^n/n!" << endl;
    cout << "Nhap x: ";
    cin >> x;
    cout << "Nhap n: ";
    cin >> n;
    S = Tinh(x, n);
    cout << "Ket Qua La: " << S;
}