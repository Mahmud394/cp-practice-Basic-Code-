#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *link;
};

int main(){
    struct node *head = NULL;
    head = (struct node*)malloc(sizeof(struct node));

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