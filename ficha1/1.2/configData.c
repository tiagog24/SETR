#include <stdio.h>
#include <stdlib.h>
#include "configData.h"


int main(){

    maxConnectionsToZero();
    printf("Valor de MaxConnections após reset: %d \n",maxConnections);
    maxConnections = 100;
    printf("Valor de MaxConnections: %d \n",maxConnections);

    return 0;
}