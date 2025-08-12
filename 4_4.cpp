#include<iostream>
using namespace std;

int sum_digits(int n){
    if(n==0){
        return 0;
    }
    else{
        return n%10+sum_digits(n/10);
    }
}

int main()
{
    int num;
    cout << "Enter a number:";
    cin >> num;
    if(num<0){
        num = -num;
    }
    cout << "Sum of digits:"<<sum_digits(num)<< endl;
    return 0;
}