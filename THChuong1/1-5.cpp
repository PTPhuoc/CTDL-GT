//Hãy khai báo kiểu dữ liệu biểu diễn khái niệm đơn thức P(x) = ax^n trong toán học và định nghĩa và định nghĩa hàm nhập, hàm xuất cho kiểu dữ liệu này

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    int a,x,n,s;

    cout << "P(x) = ax^n" << endl;
    cout << "Nhap a: ";
    cin >> a;

    cout << "Nhap n: ";
    cin >> n;

    cout << "P(x) = " << a << "x^" << n << endl;
    cout << "Nhap x: ";
    cin >> x;

    s = a * pow(x,2);

    cout << "Ket qua P(" << x << ") la: " << s;

}