#include<iostream>
using namespace std;

void call_reference(int &x,int &y){
    int temp;
    temp=x;
    x=y;
    y=temp;
}

void call_values(int x,int y){
    int temp;
    temp=x;
    x=y;
    y=temp;
}

int main()
{
    int a=1,b=9;
    call_values(a,b);
    cout << a <<""<<b<<endl;
    call_reference(a,b);
    cout << a <<""<<b<<endl;
    return 0;
}