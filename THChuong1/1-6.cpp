//Hãy khai báo kiểu dữ liệu để biểu diễn khái niệm đa thức 1 biến trong toán học: P(x) = a.n.X^n + a.n-1.X^n-1 + … + a.1.X + a.0 và định nghĩa hàm nhập và hàm xuất cho kiểu dữ liệu này

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int in(int a, int n, int x, int i){
    if(i == 0){
        cout << "P(" << x << ") = ";
    }else if(i != n || i == n){
        cout << " + ";
    }

    cout << a << "." << i << "." << x << "^" << i ;

    return 0;
}

int main(){
    int a,n,x,s;

    cout << "P(x) = a.n.X^n + a.n-1.X^n-1 + ... + a.1.X + a.0" << endl;
    cout << "Nhap a: ";
    cin >> a ;
    
    cout << "Nhap n: ";
    cin >> n ;

    cout << "Nhap x: ";
    cin >> x ;

    for(int i = 0 ; i <= n + 1 ; i++){
        s = s + a * i * pow(x,i);
        in(a,n,x,i);
    } 

    cout << endl<< "Ket qua P(" << x << ") la: " << s;
}