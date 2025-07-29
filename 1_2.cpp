#include<iostream>
using namespace std;

int main()
{
    int a[100],n;
    cout << "Enter the size of the elements:"<< endl;
    cin >> n;
    int i,j,k;
    cout << "Enter the elements of the array:"<< endl;
    for(i=0;i<n;i++){
        cin >> a[i];
    }
    cout << "The elements of the array are:"<< endl;
    for(i=0;i<n;i++){
        cout << a[i]<< endl;
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;){
            if(a[j]==a[i]){
                for(k=j;k<n;k++){
                    int temp;
                    temp=a[k];
                    a[k]=a[k-1];
                    a[k-1]=temp;
                }
                n--;
            }
            else{
                j++;
            }
        }
    }
    cout << "Updated array:"<< endl;
    for(i=0;i<n;i++){
        cout << a[i]<< endl;
    }
    return 0;
}

//1 2 2 3 3 4                 // 1 2 3 4
//0 1 2 3 4 5     // after   //  0 1 2 3