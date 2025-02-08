#include <stdio.h>
#include <stdlib.h>
// Define the node structure
struct Node
{
    int data;
    struct Node *next;
};
// Function to create a new node
struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
// Function to delete the first node
void deleteAtBeginning(struct Node **head)
{
    if (*head == NULL)
    {
        printf("List is empty. Nothing to delete.\n");
        return;
    }
    struct Node *temp = *head;
    *head = (*head)->next;
    free(temp);
    printf("Node at the beginning deleted.\n");
}
// Function to delete the last node
void deleteAtEnd(struct Node **head)
{
    if (*head == NULL)
    {
        printf("List is empty. Nothing to delete.\n");
        return;
    }
    if ((*head)->next == NULL)
    {
        free(*head);
        *head = NULL;
        printf("Node at the end deleted.\n");
        return;
    }
    struct Node *temp = *head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
    printf("Node at the end deleted.\n");
}
// Function to delete a node at a specific position
void deleteAtPosition(struct Node **head, int position)
{
    if (*head == NULL)
    {
        printf("List is empty. Nothing to delete.\n");
        return;
    }
    if (position == 1)
    {
        struct Node *temp = *head;
        *head = (*head)->next;
        free(temp);
        printf("Node at position 1 deleted.\n");
        return;
    }
    struct Node *temp = *head;
    for (int i = 1; i < position - 1 && temp != NULL; i++)
    {
        temp = temp->next;
    }
    if (temp == NULL || temp->next == NULL)
    {
        printf("Position out of bounds.\n");
        return;
    }
    struct Node *nodeToDelete = temp->next;
    temp->next = temp->next->next;
    free(nodeToDelete);
    printf("Node at position %d deleted.\n", position);
}
// Function to display the linked list
void display(struct Node *head)
{
    if (head == NULL)
    {
        printf("The list is empty.\n");
        return;
    }
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
    struct Node *head = NULL;
    // Creating a linked list for demonstration
    head = createNode(10);
    head->next = createNode(20);
    head->next->next = createNode(30);
    head->next->next->next = createNode(40);
    printf("Initial Linked List: ");
    display(head);
    // Delete at the beginning
    deleteAtBeginning(&head);
    printf("After deleting at the beginning: ");
    display(head);
    // Delete at the end
    deleteAtEnd(&head);
    printf("After deleting at the end: ");
    display(head);
    // Delete at a specific position
    deleteAtPosition(&head, 2);
    printf("After deleting at position 2: ");
    display(head);
    return 0;
}