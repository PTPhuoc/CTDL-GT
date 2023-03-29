#include <iostream>

using namespace std;

void TinhX(int n){
    if( n == 0){
        cout << "X(" << n << ") = " << 1 << endl;
    }else{
        cout << "X(" << n << ") = x("<< n - 1 << ") + y(" << n - 1 <<")\n";
    }
}

void TinhY(int n){
    if( n == 0 ){
        cout << "Y(" << n << ") = " << 0;
    }else{
        cout << "Y(" << n << ") = x(" << 3*(n - 1) << ") + y(" << 2*(n - 1) << ")";
    }
}

int main(){
    cout << "X(n) = x(n - 1) + y(n - 1) (n > 0)\nY(n) = 3 * x(n - 1) + 2 * y(n - 1) (n > 0)" << endl;
    cout << "Nhap n :";
    int n;
    cin >> n;
    while(n < 0){
        cout << "Dieu Kien n > 0\nNhap Lai: ";
        cin >> n;
    }

    TinhX(n);
    TinhY(n);
}