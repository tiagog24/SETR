#include <stdio.h>

typedef struct linked_list{
    int data;
    struct linked_list *next;
} node;

node* createNode(int val);
node* insert_node(node *head, int val);
node* delete_node(node *head, int val);
void printList(node *head);