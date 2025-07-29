#include<iostream>
using namespace std;

int main()
{
    int a[10], b[10], n = 10, i, j;

    cout << "Enter 10 elements:" << endl;
    for(i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Count digits in each number without using cmath
    for(i = 0; i < n; i++) {
        int num = a[i];
        if (num < 0) {
            num = -num; // manual abs
        }

        int count = 0;
        do {
            count++;
            num /= 10;
        } while(num != 0);
        b[i] = count;
    }

    // Bubble sort: sort array a[] based on digit count stored in b[]
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(b[j] > b[j+1]) {
                // Swap digit counts
                int temp = b[j];
                b[j] = b[j+1];
                b[j+1] = temp;
                // Swap corresponding elements in a[]
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    // Output result
    cout << "Updated array sorted by number of digits:" << endl;
    for(i = 0; i < n; i++) {
        cout << a[i] << endl;
    }

    return 0;
}