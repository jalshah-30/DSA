#include<iostream>
using namespace std;

#define MAX 100

int arr[MAX],TOP=-1;
void push(int value){
    if(TOP==MAX-1){
        cout << "Stack Overflow"<< endl;
    }
    else{
        TOP++;
        arr[TOP]=value;
    }
}

int pop(){
    if(TOP==-1){
        cout << "Stack underflow"<< endl;
    }
    else{
        return arr[TOP--];
    }
}

int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    int i;
    for(i=0;i<=TOP;i++){
        cout << arr[i]<< endl;
    }
    cout << "Reversing the stack:"<< endl;
    for(i=TOP;i>=0;i--){
        cout << pop()<<endl;
    }
    return 0;
}