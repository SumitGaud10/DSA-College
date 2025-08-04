#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = nullptr;
    }
};

class LinkedList
{
    Node *head;

public:
    LinkedList()
    {
        head = nullptr;
    }

    void insertAtBeginning(int val)
    {
        Node *newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }

    void insertAtEnd(int val)
    {
        Node *newNode = new Node(val);
        if (!head)
        {
            head = newNode;
            return;
        }
        Node *temp = head;
        while (temp->next)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void deleteFromBeginning()
    {
        if (!head)
        {
            cout << "Cannot delete, list is empty";
        }
        Node *temp = head;
        head = head->next;
        delete temp;
    }

    void deleteFromEnd()
    {
        if (!head)
        {
            cout << "Cannot delete, list is empty";
        }
        Node *temp = head;
        while (temp->next->next)
        {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
    }

    void display()
    {
        if (!head)
        {
            cout << "List is empty";
            return;
        }
        Node *temp = head;
        while (temp)
        {
            cout << temp->data;
            if (temp->next)
            {
                cout << " -> ";
            }
            temp = temp->next;
        }
        cout << "\n";
    }
};

int main()
{
    LinkedList list;
    int choice, value;
    while (true)
    {
        cout << "\n--- Singly Linked List Menu ---\n";
        cout << "1. Insert at Beginning\n";
        cout << "2. Insert at End\n";
        cout << "3. Delete from Beginning\n";
        cout << "4. Delete from End\n";
        cout << "5. Display\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value to insert: ";
            cin >> value;
            list.insertAtBeginning(value);
            break;

        case 2:
            cout << "Enter value to insert: ";
            cin >> value;
            list.insertAtEnd(value);
            break;

        case 3:
            list.deleteFromBeginning();
            break;

        case 4:
            list.deleteFromEnd();
            break;

        case 5:
            list.display();
            break;

        case 6:
            return 0;
        default:
            cout << "Invalid choice!\n";
        }
    }
    return 0;
}