#include <iostream>
#include <cstring>
using namespace std;
#define MAX 100

char stack[MAX];
int TOP = -1;

int precedence(char symbol)
{
    if (symbol == '^' || symbol == '$')
        return 3;
    else if (symbol == '*' || symbol == '/')
        return 2;
    else if (symbol == '+' || symbol == '-')
        return 1;
    else
        return -1;
}

void push(char value)
{
    if (TOP == MAX - 1)
    {
        cout << "Stack overflow" << endl;
    }
    else
    {
        stack[++TOP] = value;
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
        return stack[TOP--];
    }
}

void infix_to_postfix(char temp[MAX])
{
    int i, l = strlen(temp);
    char postfix[MAX];
    int pl = 0;

    temp[l] = ')';
    temp[l + 1] = '\0';
    push('(');

    for (i = 0; i < strlen(temp); i++)
    {
        char ch = temp[i];

        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
        {
            postfix[pl++] = ch;
        }
        else if (ch == '(')
        {
            push(ch);
        }
        else if (ch == ')')
        {
            while (TOP != -1 && stack[TOP] != '(')
            {
                postfix[pl++] = pop();
            }
            pop();
        }
        else
        {
            while (TOP != -1 && precedence(stack[TOP]) >= precedence(ch))
            {
                postfix[pl++] = pop();
            }
            push(ch);
        }
    }

    postfix[pl] = '\0';
    cout << "Postfix of the expression: " << postfix << endl;
}

int main()
{
    char exp[MAX];
    cout << "Enter an infix expression: ";
    cin >> exp;
    infix_to_postfix(exp);
    return 0;
}
