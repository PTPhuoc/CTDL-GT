//https://codehow.net/de-quy-nhi-phan-binary-recursion-trong-c-c++-89.html
#include <iostream>
using namespace std;
int fib(int n){
  if(n <= 2) return 1;
  return fib(n - 1) + fib(n - 2);
}