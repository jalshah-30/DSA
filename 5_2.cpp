#include <iostream>
using namespace std;
#define MAX 5

int QUEUE[MAX], front = -1, rear = -1;

void ISFULL()
{
    if ((front == 0 && rear == MAX - 1) || ((rear + 1) % MAX == front))
    {
        cout << "The Queue is Full" << endl;
    }
    else
    {
        cout << "The Queue is not Full" << endl;
    }
}

void ISEMPTY()
{
    if (front==-1)
    {
        cout << "The Queue is Empty" << endl;
    }
    else
    {
        cout << "The Queue is not Empty" << endl;
    }
}

void ENQUEUE(int n)
{
    if ((front == 0 && rear == MAX - 1) || (front == rear + 1))
    {
        cout << "Queue is overflow" << endl;
    }
    else
    {
        if (front == -1 && rear == -1)
        {
            front = 0;
            rear = 0;
        }
        else if (rear == MAX - 1 && front != 0)
        {
            rear = 0;
        }
        else
        {
            rear += 1;
        }
        QUEUE[rear] = n;
    }
}

void DEQUEUE()
{
    if (front == -1)
    {
        cout << "Queue Underflow" << endl;
    }
    else
    {
        int val = QUEUE[front];
        cout << "Dequeued Element:" << val << endl;

        if (rear == front)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            if (front == MAX - 1)
            {
                front = 0;
            }
            else
            {
                front += 1;
            }
        }
    }
}

void DISPLAY()
{
    int i;
    if (front == -1 && rear == -1)
    {
        cout << "Queue is underflow" << endl;
    }
    else
    {
        if (front > rear)
        {
            for (i = front; i < MAX; i++)
            {
                cout << QUEUE[i] << endl;
            }
            for (i = 0; i <= rear; i++)
            {
                cout << QUEUE[i] << endl;
            }
        }
        else if (front <= rear)
        {
            for (i = front; i <= rear; i++)
            {
                cout << QUEUE[i] << endl;
            }
        }
    }
}

int main()
{
    cout << "Circular Queue" << endl;
    int choose;
    do
    {
        cout << "Choose the option" << endl;
        cout << "1.ENQUEUE" << endl
             << "2.DEQUEUE" << endl
             << "3.ISFULL" << endl
             << "4.ISEMPTY" << endl
             << "5.DISPLAY" << endl
             << "6.EXIT" << endl;
        cin >> choose;
        switch (choose)
        {
        case 1:
            int x;
            cout << "Enter the element:";
            cin >> x;
            ENQUEUE(x);
            break;
        case 2:
            DEQUEUE();
            break;
        case 3:
            ISFULL();
            break;
        case 4:
            ISEMPTY();
            break;
        case 5:
            DISPLAY();
            break;
        }
    } while (choose != 6);

    return 0;
}