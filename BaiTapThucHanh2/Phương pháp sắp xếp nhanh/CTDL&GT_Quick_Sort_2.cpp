#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int index = partition(arr, low, high);
        quickSort(arr, low, index - 1);
        quickSort(arr, index + 1, high);
    }
}

int partition (int arr[], int low, int high)
{
    int pivot = arr[high];
    int left = low;
    int right = high - 1;
    while(true){
        while(left <= right && arr[left] < pivot) left++;
        while(right >= left && arr[right] > pivot) right--;
        if (left >= right) break; 
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
    swap(arr[left], arr[high]);
    return left;
}

int main(){
    int n, M[50];
    cout << "Nhap So Mang: ";
    cin >> n;
    for(int i = 0; i <= n; i++){
        cout << "M[" << i << "] = ";
        cin >> M[i];
    }

    quickSort(M,0,n - 1);

	for (int i=0; i < n; i++){
        cout << M[i] << " ";
      }
}