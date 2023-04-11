#include <iostream>
using namespace std;
struct stack{
    int top;
    int A[100];
};
typedef struct stack STACK;
void Init (STACK &s){
    //gan phan tu top cua stack bang -1 de khoi tao
    s.top=-1;
}
int Empty (STACK s){
    //neu phan tu top bang -1 thi stack rong va return 1
    if (s.top == -1){
        return 1;
    }
    //nguoc lai return 0
    return 0;
}
int IsFull (STACK s){
    //neu phan tu top cua stack bang MAX - 1 thi stack da day thi return 1
    if (s.top==100-1){
        return 1;
    }
    //nguoc lai return 0
    return 0;
}
void Push(STACK &s,int x){
    // neu stack chua day thi thuc hien push
    if(IsFull(s)==0){ 
        //tang chi so top len 1 don vi
        s.top++;
        //gan phan tu mang tai vi tri top bang gia tri x
        s.A[s.top]=x;
    }
}
int Pop(STACK &s){
    //khai bao bien x de chua du lieu
    int x;
     // neu stack khac rong
    if(!Empty(s)){
        //thuc hien gan phan tu cuoi cua stack bang x
        x = s.A[s.top];
        //giam so luong phan tu mang di 1 don vi
        s.top--;
    }
    //tra ve x duoc gan bang phan tu cuoi cung cua stack
    return x;
}
int Top(STACK &s){
    //khai bao bien x de chua du lieu
    int x;
     // stack khac rong
    if(!Empty(s)){
        //thuc hien gan phan tu cuoi bang x
        x = s.A[s.top];
        //tra ve x duoc gan bang phan tu cuoi cung cua mang
        return x;
    }else{ //neu stack do rong thi tra ve NULL
        return NULL;
    }
}

