#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
int search(struct Node *head, int key)
{
    struct Node *temp = head;
    int position = 1; // Start position from 1
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            return position;
        }
        temp = temp->next;
        position++;
    }
    return -1;
}
void display(struct Node *head)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
int main()
{
    struct Node *head = createNode(10);
    head->next = createNode(20);
    head->next->next = createNode(30);
    head->next->next->next = createNode(40);
    printf("Linked List: ");
    display(head);
    int key;
    printf("Enter the value to search: ");
    scanf("%d", &key);
    int position = search(head, key);
    if (position != -1)
    {
        printf("Element %d found at position %d.\n", key, position);
    }
    else
    {
        printf("Element %d not found in the linked list.\n", key);
    }
    return 0;
}