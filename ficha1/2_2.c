#include <stdio.h>
#include <stdlib.h>

void swap(int* val1, int* val2);

int main(){

    int val1 = 1;
    int val2 = 2;

    printf("Number1: %d, Number2: %d\n", val1, val2);
    swap(&val1, &val2);
    printf("After swap Number1: %d, Number2: %d\n", val1, val2);



    return 0;
}

void swap(int* val1, int* val2){

    int dummy1 = *val1;
    int dummy2 = *val2;

    *val1 = dummy2;
    *val2 = dummy1; 

}