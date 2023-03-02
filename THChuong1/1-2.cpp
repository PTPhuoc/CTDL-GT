//Hãy khai báo kiểu dữ liệu biểu diễn khái niệm hỗn số trong toán học và định nghĩa hàm nhập, hàm xuất cho kiểu dữ liệu này

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float a,b,c,d;

    cout << "Hon so a + b/c"<<endl;

    cout << "Nhap a: ";
    cin >> a;

    cout << "Nhap b: ";
    cin >> b;

    cout << "Nhap c: ";
    cin >> c;

    d = a + b/c;

    cout << "Ket qua la: " << fixed << setprecision(2) << d;
}