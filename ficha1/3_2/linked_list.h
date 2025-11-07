#include <stdio.h>

typedef struct linked_list{

    int data;
    struct linked_list *next;

}node;

node* createNode(int val);
node* insertNode(int val, node *head);
node* deleteNode(int val, node *head);
void printList(node *head);
