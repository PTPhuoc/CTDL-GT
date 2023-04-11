#include <iostream>
using namespace std;

void SapXepKyTu(string K[], int n){
    int pos,i;
    string x;
    for(i = 1; i < n ; i++){
        x = K[i];
        pos = i - 1;
        while(pos >= 0 && K[pos] > x){
            K[pos+1] = K[pos];
			pos--;
        }
        K[pos+1] = x;
    }
}

void SapXepSo(int T[], int n){
    int pos,i;
    int x;
    for(i = 1; i < n ; i++){
        x = T[i];
        pos = i - 1;
        while(pos >= 0 && T[pos] > x){
            T[pos+1] = T[pos];
			pos--;
        }
        T[pos+1] = x;
    }
}

int main(){

    string K[100];
    int T[100];
    int n,s = 0,m = 0;
    bool Kiem = false;
    cout << "Nhap So Ung Dung Can Sap Xep: ";
    cin >> n;
    while(n < 0){
        cout << "Nhap Sai!\nNhap Lai: ";
        cin >> n;
    }
    for(int i = 0 ; i <= n - 1; i++){
        cout << "Ung dung " << i + 1 << ": ";
        cin >> K[m];
        string M = K[m];
        int Dem = 0;
        for(int j = 0; j <= M.length(); j++){
            if(M[j] >= '0' && M[j] <= '9'){
                Kiem = true;
                Dem++;
            }else{
                Kiem = false;
                Dem--;
            }
            if(Dem == M.length() && Kiem == true){
                T[s] = atoi(K[m].c_str());
                K[m].clear();
                s++;
                m--;
            }
        }
        m++;
    }

    SapXepSo(T,s);

    SapXepKyTu(K, m);

    cout << "Sap Xep Theo Chieu Tu Nho Den Lon" << endl;
    for(int i = 0; i <= s - 1 ; i++){
        cout << T[i] << "   ";
    }

    for(int i = 0; i <= m  ; i++){
        cout << K[i] << "   ";
    }
}