#include<iostream>
using namespace std;

void call_reference(int &x,int &y){
    int temp;
    temp=x;
    x=y;
    y=temp;
    cout << x << " "<< y<< endl;
}

void call_values(int x,int y){
    int temp;
    temp=x;
    x=y;
    y=temp;
    cout << x << " "<< y<< endl;
}

int main()
{
    int a=1,b=9;
    call_values(a,b);
    call_reference(a,b);
    return 0;
}