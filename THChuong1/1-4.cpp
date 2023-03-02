//Hãy khai báo kiểu dữ liệu biểu diễn khái niệm điểm trong không gian Oxyz và định nghĩa hàm nhập, hàm xuất cho kiểu dữ liệu này

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float x,y,z;

    cout << "Nhap diem X: ";
    cin >> x;

    cout << "Nhap diem Y: ";
    cin >> y;

    cout << "Nhap diem Z: ";
    cin >> z;

    cout << fixed << setprecision(2) << "Toa do Oxyz co diem la ("<< x << "," << y << "," << z <<")";
}