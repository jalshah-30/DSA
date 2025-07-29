//To pass array as an argument

#include<iostream>
using namespace std;

void sum_array(int a[5]){
    int i,sum=0;
    for(i=0;i<5;i++){
        sum = sum+a[i];
    }
    cout << "The sum of the array:"<< sum << endl;
}

int main()
{
    int arr[5];
    int i;
    cout << "Enter the elements of the array:"<< endl;
    for(i=0;i<5;i++){
        cin>>arr[i];
    }
    sum_array(arr);
    return 0;
}