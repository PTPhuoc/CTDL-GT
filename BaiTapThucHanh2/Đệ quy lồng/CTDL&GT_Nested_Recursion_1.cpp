//https://freetuts.net/de-quy-long-nested-recursion-2959.html
#include <iostream>
using namespace std;
int A(int m, int n){
  if(m == 0) // nếu m == 0 thì return n + 1
    return n + 1;
  else if(n == 0) // nếu n == 0 thì return đệ quy A(m - 1, 1)
    return A(m - 1, 1);
  else // nếu m > 0 và n > 0 thì return đệ quy lồng A(m-1, A(m, n-1))
    return A(m-1, A(m, n-1));
}