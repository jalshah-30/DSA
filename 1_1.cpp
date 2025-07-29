#include<iostream>
using namespace std;
int main()
{
    int a[100],n,i,j,e,add,del;
    cout << "Enter the number of elements of array:"<< endl;
    cin>>n;
    cout << "Enter the elements of the array:"<< endl;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout << "Elements of the array:"<< endl;
    for(i=0;i<n;i++){
        cout << a[i]<<endl;
    }
    cout << "Enter the element to be added:"<< endl;
    cin >> e;
    cout << "At which position you want to add:"<< endl;
    cin >> add;

    for(i=n;i>=add;i--){  
        int temp;
        temp=a[i];
        a[i]=a[i-1];
        a[i-1]=temp; 
    }
    a[add-1]=e;
    for(i=0;i<=n;i++){
        cout<<a[i]<<endl;
    }
    
    cout << "Enter the position of the element to be deleted:"<< endl;
    cin >> del;

    for(i=del;i<=n;i++){
        int temp;
        temp=a[i];
        a[i]=a[i-1];
        a[i-1]=temp;
    }
    n--;

    for(i=0;i<=n;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}

// 1 2 3 4 5                              1 6 2 3 4 5
// 0 1 2 3 4         // after insert      0 1 2 3 4 5