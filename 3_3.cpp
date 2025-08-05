#include<iostream>
#include<cstring>
using namespace std;

#define MAX 100

int TOP = -1;
char stack[MAX];

void push(char value) {
    if (TOP == MAX - 1) {
        cout << "Stack overflow" << endl;
    } else {
        TOP++;
        stack[TOP] = value;
    }
}

char pop() {
    if (TOP == -1) {
        cout << "Stack underflow" << endl;
        return '\0'; 
    } else {
        return stack[TOP--];
    }
}

void display() {
    for (int i = 0; i <= TOP; i++) {
        cout << stack[i];
    }
    cout << endl;
}

int main() {
    char word[100], temp[100];
    cout << "Enter a word: ";
    cin >> word;

    int l = strlen(word);

    for (int i = 0; i < l; i++) {
        push(word[i]);
    }

    display();

    for (int i = 0; i < l; i++) {
        temp[i] = pop();
    }
    temp[l] = '\0'; 

    if (strcmp(temp, word) == 0) {
        cout << "String is palindrome" << endl;
    } else {
        cout << "String is not palindrome" << endl;
    }

    return 0;
}
