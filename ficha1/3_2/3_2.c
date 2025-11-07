#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

int main(){

    node *head = NULL;

    for(int i = 1; i < 10; i++){

        head = insertNode(i, head);

    }
    printList(head);
    head = deleteNode(9, head);
    printList(head);



    return 0;
}