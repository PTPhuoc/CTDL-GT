#include <iostream>

using namespace std;

void In(float M[], int n)
{
    if (n >= 0){
        if(M[n] > 0){
            cout << M[n] << " ";
            In(M, n - 1);
        }else{
            In(M, n - 1);
        }
    }else {
        cout << endl;
    }
}

int main()
{
    int n;
    float M[50];
    cout << "Nhap So Mang: ";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        cout << "Nhap M[" << i << "] = ";
        cin >> M[i];
    }
    In(M, n);
}