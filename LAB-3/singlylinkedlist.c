#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head = NULL;

struct Node *createNode(int val)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->next = NULL;
}

void insertAtBeginning(int val)
{
    struct Node *newNode = createNode(val);
    newNode->next = head;
    head = newNode;
}

void insertAtEnd(int val)
{
    struct Node *newNode = createNode(val);

    if (!head)
    {
        head = newNode;
        return;
    }

    struct Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void deleteFromBeginning()
{
    if (!head)
    {
        printf("Cannot delete, list is empty");
        return;
    }
    struct Node *temp = head;
    head = temp->next;
    free(temp);
}

void deleteFromEnd()
{
    if (!head)
    {
        printf("Cannot delete, list is empty");
        return;
    }
    struct Node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
}

void display()
{
    if (!head)
    {
        printf("List is empty\n");
    }
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("%d", temp->data);
        if (temp->next != NULL)
        {
            printf(" -> ");
        }
        temp = temp->next;
    }
    printf("\n");
}

int main()
{

    int choice, value;
    while (1)
    {
        printf("\n--- Singly Linked List Menu ---\n");
        printf("1. Insert at Beginning\n");
        printf("2. Insert at End\n");
        printf("3. Delete from Beginning\n");
        printf("4. Delete from End\n");
        printf("5. Display\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        // Menu-driven interface
        switch (choice)
        {
        case 1:
            printf("Enter value to insert: ");
            scanf("%d", &value);
            insertAtBeginning(value);
            break;
        case 2:
            printf("Enter value to insert: ");
            scanf("%d", &value);
            insertAtEnd(value);
            break;
        case 3:
            deleteFromBeginning();
            break;
        case 4:
            deleteFromEnd();
            break;
        case 5:
            display();
            break;
        case 6:
            exit(0);
        default:
            printf("Invalid choice!\n");
        }
    }
    return 0;
}