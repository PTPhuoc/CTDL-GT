#include <iostream>
#include <iomanip>

/*
Tên: Phan Tân Phước
Lớp: CNTT 2
*/

using namespace std;

int TPHCM(){
    char a[30] = "Tp Ho Chi Minh";
    int b = 2;
    float c = 2095.00;
    cout << "Ma Thanh Pho 0" << b <<", Ten " << a << ", tong dien tich " << fixed << setprecision(2) << c << "km vuong" << endl;
    return 0;
}

int TPHN(){
    char a[30] = "Tp Ha Noi";
    int b = 1;
    float c = 3359.82;
    cout << "Ma Thanh Pho 0" << b <<", Ten " << a << ", tong dien tich " << fixed << setprecision(2) << c << "km vuong" << endl;
    return 0;
}

int TPHP(){
    char a[30] = "Tp Hai Phong";
    int b = 3;
    float c = 1523.9;
    cout << "Ma Thanh Pho 0" << b <<", Ten " << a << ", tong dien tich " << fixed << setprecision(2) << c << "km vuong" << endl;
    return 0;
}

int TPDN(){
    char a[30] = "Tp Da Nang";
    int b = 4;
    float c = 1285.4;
    cout << "Ma Thanh Pho 0" << b <<", Ten " << a << ", tong dien tich " << fixed << setprecision(2) << c << "km vuong" << endl;
    return 0;
}

int main(){
    
    int a;
    cout << "1 Tp Ho Chi Minh\n2 Tp Ha Noi\n3 Tp Hai Phong\n4 Tp Da Nang\nNhap 1,2,3,4 de biet thong tin thanh pho\n";
    cin >> a;
    switch(a){
        case 1 : TPHCM();break;
        case 2 : TPHN();break;
        case 3 : TPHP();break;
        case 4 : TPDN();break;
        default : cout << "Nhap sai!";
    }
}
