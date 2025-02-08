#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *link;
};

struct node* add_beg(struct node* head,int data){
    struct node *ptr = malloc(sizeof(struct node));
    ptr->data = data;
    ptr->link = NULL;
    ptr->link = head;
    head =ptr;
    printf("%p\n",head);
    printf("%d\n",ptr->data);
    }

int main(){

    struct node *head = NULL;
    head = (struct node*)malloc(sizeof(struct node));

    add_beg(head,70);


    head->data = 45;
    head->link =NULL;

    printf("%d\n",head->data);



    struct node *newNode = NULL;
    newNode = (struct node*)malloc(sizeof(struct node));

    newNode->data = 50;
    newNode->link =NULL;
    head->link=newNode;

    printf("%d\n",newNode->data);


    struct node *newNode2 = NULL;
    newNode2 = (struct node*)malloc(sizeof(struct node));

    newNode2->data = 60;
    newNode2->link =NULL;
    newNode->link=newNode2;
    printf("%d\n",newNode2->data);

    

    return 0;
}