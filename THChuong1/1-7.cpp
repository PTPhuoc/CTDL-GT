//Hãy khai báo kiểu dữ liệu biểu diễn ngày trong thế giới thực và định nghĩa hàm nhập, hàm xuất cho kiểu dữ liệu này

#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	time_t giothuc;
	giothuc = time(NULL);

	string tm = ctime(&giothuc);
	cout << "Hom nay la " << tm;
}