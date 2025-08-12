#include <iostream>
#include <cstring>
using namespace std;
#define MAX 100
char exp[MAX], temp;
int TOP = -1;
void push(char value)
{
    if (TOP == MAX - 1)
    {
        cout << "Stack overflow" << endl;
    }
    else
    {
        TOP++;
        exp[TOP] = value;
    }
}

char pop()
{
    if (TOP == -1)
    {
        cout << "Stack underflow" << endl;
        return '\0';
    }
    else
    {
        return exp[TOP--];
    }
}

int main()
{
    int result = 1;
    char eq[MAX];
    cout << "Enter the expression:" << endl;
    cin >> eq;

    int l, i;
    l = strlen(eq);
    for (i = 0; i < l; i++)
    {
        if (eq[i] == '(' || eq[i] == '[' || eq[i] == '{')
        {
            push(eq[i]);
        }
        else if (eq[i] == ')' || eq[i] == '}' || eq[i] == ']')
        {
            temp = pop();
            if (eq[i] == ')' && temp != '(')
            {
                result = 0;
            }
            else if (eq[i] == '}' && temp != '{')
            {
                result = 0;
            }
            else if (eq[i] == ']' && temp != '[')
            {
                result = 0;
            }
        }
    }
    if (TOP != -1)
    {
        result = 0;
    }
    if (result == 0)
    {
        cout << "Expression is unbalanced" << endl;
    }
    else
    {
        cout << "Expression is balanced" << endl;
    }

    return 0;
}