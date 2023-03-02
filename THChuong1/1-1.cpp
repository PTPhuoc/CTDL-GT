//Hãy khai báo kiểu dữ liệu biểu diễn khái niệm phân số trong toán học và định nghĩa hàm nhập, hàm xuất cho kiểu dữ liệu này
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float a,b,c;

    cout << "Nhap tu so: ";
    cin >> a;

    cout << "Nhap mau so: ";
    cin >> b;

    c = a / b;

    cout  << fixed << setprecision(2) <<"Ket qua phep chia la: "  << c ;
}