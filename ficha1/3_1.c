#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

int main(){

    int val = 0;
    node *head = NULL;
    head = insert_node(head, val);
    val = 10;
    createNode(val);
    head = insert_node(head, val);
    printList(head);
    head = delete_node(head, val);
    printList(head);

    free(head);
    return 0;
}

node* createNode(int val){

    node *new_node = malloc(sizeof(node));
    new_node->data = val;
    new_node->next = NULL;

    return new_node;
}

node* insert_node(node *head ,int val){

    node *new_node = createNode(val);
    new_node->next = head;


    return new_node;
}

node* delete_node(node *head, int val){

    node *current = head;
    node *previous = NULL;
    if(head == NULL){
        printf("List is empty. Cannot delete.\n");
        return NULL;
    }
    if(current->data = val){

        head = current->next;
        free(current);
        printf("Node deleted sucessfully \n");
        return head;
    }


    while(head != NULL && current->data != val){
        previous = current;
        current = current->next;
    }
    if(current->data = val){

        head = current->next;
        free(current);
        printf("Node deleted sucessfully \n");
    }
    if(current == NULL){

        printf("Node not found\n");
    }

    return head;
}

void printList(node *head){

    node *current = head;

    printf("List:\n");
    while(current != NULL){

        printf("val: %d\n", current->data);
        current = current->next;

    }
}