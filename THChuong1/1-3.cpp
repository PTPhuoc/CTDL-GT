// Hãy khai báo kiểu dữ liệu biểu diễn khái niệm điểm trong mặt phẳng Oxy và định nghĩa hàm nhập, hàm xuất cho kiểu dữ liệu này

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float x,y;

    cout << "Nhap diem X: ";
    cin >> x;

    cout << "Nhap diem Y: ";
    cin >> y;

    cout << fixed << setprecision(2) << "Toa do Oxy co diem la ("<< x << "," << y <<")";
}