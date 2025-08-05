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

void pop(){
    if(TOP==-1){
        cout << "Stack underflow"<< endl;
    }
    else{
        int x;
        x=arr[TOP--];
        cout << x << endl;
    }
}

void peek(){
    if(TOP==-1){
        cout << "Stack is Empty"<< endl;
    }
    else{
        cout << arr[TOP]<< endl;
    }
}

void isempty(){
    if(TOP==-1){
        cout << "Stack is Empty"<< endl;
    }
    else{
        cout << "Stack is not Empty"<< endl;
    }
}

void isfull(){
    if(TOP=MAX-1){
        cout << "Stack is Full"<< endl;
    }
    else{
        cout << "Stack is not Full"<< endl;
    }
}

void display(){
    if(TOP==-1){
        cout << "Stack is Empty"<< endl;
    }
    else{
        int i;
        for(i=0;i<=TOP;i++){
            cout << arr[i]<< endl;
        }
    }
}

int main()
{
    int choice;
    do{
        cout << "Choose the option:"<< endl;
        cout << "1.Push"<< endl<<"2.Pop"<< endl << "3.Peek"<< endl << "4.Isempty"<< endl<<"5.Isfull"<< endl;
        cout <<"6.Display"<< endl << "7.Exit"<< endl;
        cin >> choice;

        switch(choice){
            case 1:
                int x;
                cout << "The element to be pushed"<< endl;
                cin>>x;
                push(x);
                break;
            case 2 :
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                isempty();
                break;
            case 5 :
                isfull();
                break;
            case 6:
                display();
                break;
        }
    }while(choice!=7);
    return 0;
}