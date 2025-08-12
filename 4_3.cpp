#include<iostream>
#include<cstring>
using namespace std;
#define MAX 100

float stack[MAX];
int TOP=-1;

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

void eva_postfix(char temp[MAX]){
    int l=strlen(temp),i;
    temp[l]=')';
    temp[l+1]='\0';
    for(i=0;i<l+1;i++){
        if(temp[i]>='0' && temp[i]<='9'){
            push(temp[i]-'0');
        }
        if(temp[i]=='+' || temp[i]=='-' || temp[i]=='*' || temp[i]=='/'|| temp[i]=='^'){
            float x,y,result;
            x=pop();
            y=pop();
            if(temp[i]=='+'){
                result=x+y;
                push(result);
            }
            else if(temp[i]=='-'){
                result = y-x;
                push(result);
            }
            else if(temp[i]=='*'){
                result = y*x;
                push(result);
            }else if(temp[i]=='/'){
                result = y/x;
                push(result);
            }
        }
    }
    cout <<"Result of evaluation:"<<stack[TOP]<< endl;
}

int main()
{
    char exp[MAX];
    cout << "Enter a postfix expression:";
    cin>>exp;
    eva_postfix(exp);
    return 0;
}