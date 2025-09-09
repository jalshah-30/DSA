// Singly linked list
#include <iostream>
using namespace std;

struct Node
{
    int Data;
    Node *next;
};

Node *START = NULL;
int size;

void CreateList()
{
    cout << "Enter the size of linked list to be created: ";
    cin >> size;

    if (size <= 0)
    {
        cout << "Invalid size!" << endl;
        return;
    }

    Node *prev = NULL;
    for (int i = 0; i < size; i++)
    {
        Node *newNode = new Node;
        cout << "Enter value for node " << i + 1 << ": ";
        cin >> newNode->Data;
        newNode->next = NULL;

        if (START == NULL)
        {
            START = newNode; // first node
        }
        else
        {
            prev->next = newNode; // link previous node
        }
        prev = newNode;
    }
}

void Traversing()
{
    if (START == NULL)
    {
        cout << "List is empty!" << endl;
        return;
    }
    Node *ptr = START;
    cout << "Linked List: ";
    while (ptr != NULL)
    {
        cout << ptr->Data << endl;
        ptr = ptr->next;
    }
    
}

void Insert_front()
{
    int val;
    cout << "Enter the value to be inserted at front: ";
    cin >> val;

    Node *Add = new Node;
    Add->Data = val;
    Add->next = START;
    START = Add;
}

int main()
{
    int choice;
    do
    {
        cout << "\nSingly Linked List Menu\n";
        cout << "1. CREATE\n2. TRAVERSE\n3. ADD AT FRONT\n4. EXIT\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            CreateList();
            break;
        case 2:
            Traversing();
            break;
        case 3:
            Insert_front();
            break;
        case 4:
            cout << "Exiting..."<<endl;
            break;
        default:
            cout << "Invalid choice!"<< endl;
        }
    } while (choice != 4);

    return 0;
}