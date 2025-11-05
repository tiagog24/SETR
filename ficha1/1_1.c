#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void myRand(int *value, int *ncalls);

int main(){

    srand(time(NULL));
    int val;
    int ncalls = 0;

    myRand(&val, &ncalls);
    myRand(&val, &ncalls);

    return 0;
}

void myRand(int *value, int *ncalls){

    int min = 0, max = 100;

    *value = (rand() % (max - min + 1)) + min;
    (*ncalls)++;
    printf("Number: %d , and this is the %d repetition\n", *value, *ncalls);
    *value = 0;
}
