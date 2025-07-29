// Reverse the elements of the array using a pointer

#include<iostream>
using namespace std;
int main()
{
    int a[5],i;
    int *ptr;
    ptr=a;
    cout << "Enter the elements of the array:"<< endl;
    for(i=0;i<5;i++){
        cin >> *(ptr+i);
    }
    cout << "Reverse order of the array:"<< endl;
    for(i=4;i>=0;i--){
        cout << *(ptr+i)<<endl;
    }

    return 0;
}