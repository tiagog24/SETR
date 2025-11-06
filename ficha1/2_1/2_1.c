#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double* setup(int n, int m);

int main(){

    double *metrics = NULL;
    int n = 100, m = 100;

    srand(time(NULL));
    metrics = setup(n, m);
    printf("Average: %.2f, maximum: %.2f, minimum: %.2f\n", metrics[0], metrics[1], metrics[2]);


    return 0;
}

double* setup(int n, int m){

    double avr = 0;
    double *metrics = (double*)malloc(3 * sizeof(double));
    int *var = (int*)malloc(n * sizeof(int));
    int i = 0, sum = 0, max = 1, min = m;

    
    for(; i < n; i++){

        var[i] = ((rand() % (-m))+1 );
        sum += var[i];
        if(var[i] > max){

            max = var[i];
        }
        if(var[i] < min){

            min = var[i];
        }
    }
    avr = (double)sum / m;
    
    metrics[0] = avr;
    metrics[1] = max;
    metrics[2] = min;

    free(var);
    
    return metrics;
}