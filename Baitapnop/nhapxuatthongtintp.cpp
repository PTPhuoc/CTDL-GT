#include <iostream>
#include <iomanip>

/*
Tên: Phan Tân Phước
Lớp: CNTT 2
*/

using namespace std;

int main(){
    char ten[30];
    int ma;
    float dt;

    cout << "Nhap ten thanh pho: ";
    cin.getline(ten,30);
    
    cout << "\nNhap ma thanh pho: ";
    cin >> ma;

    cout << "\nNhap dien tich: ";
    cin >> dt;

    cout << "\nThong tin thanh pho" <<"\nMa Thanh pho: " << ma << "\nTen thanh pho: " << ten << "\nDien tich: " << fixed << setprecision(2) << dt << "Km vuong" << endl;
}