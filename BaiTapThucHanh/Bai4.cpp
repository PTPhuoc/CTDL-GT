#include <iostream>
#include <cmath>

using namespace std;

long Tinh(int n){
    int s;
    if(n == 0){
        return 1;
    }else{
        for(int i = 1; i <= n; i++)
        {
            s = s + i * i * Tinh(n - i);
        }
        return s;
    }
}

int main()
{
    long n, x;
    cout << "X(n) = n^2.x(0) + (n - 1)^2.x(1) + ... + (n - i)^2.x(i) + ... + 2^2.x(n - 2) + 1^2.x(n - 1)\nNhap n: ";
    cin >> n;
    x = Tinh(n);
    cout << "X("<< n <<") = " << x; 
    return 0;
}

