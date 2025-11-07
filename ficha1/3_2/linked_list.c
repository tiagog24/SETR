#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

node *createNode(int val)
{

    node *new_node = malloc(sizeof(node));
    new_node->data = val;
    new_node->next = NULL;

    return new_node;
}

node *insertNode(int val, node *head)
{

    node *new_node = createNode(val);
    new_node->next = head;

    return new_node;
}

node *deleteNode(int val, node *head)
{

    node *current = head;
    node *previous = NULL;

    while (current != NULL && current->data != val){

        previous = current;
        current = current->next;
    }
    if (current == NULL){

        printf("Node with value %d not found\n", val);
        return head;
    }
    if (previous == NULL){
        head = current->next;
        printf("Node (head) with value %d sucessfully deleted\n", val); 

    }    
    else {
        previous->next = current->next;
        printf("Node with value %d sucessfully deleted\n", val); 
    }
    
    free(current);
    return head;

}

void printList(node *head)
{

    node *current = head;
    printf("List:\n");
    while (current != NULL)
    {

        printf("val: %d\n", current->data);
        current = current->next;
    }
}
