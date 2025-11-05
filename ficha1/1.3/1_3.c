#include <stdio.h>
#include <stdlib.h>
#include "configData.h"

int main(){

    int16_t val;

    configInit();
    printf("Define value for maxConnections:");
    scanf(" %hd", &val);
    configSetMaxConnections(val);
    configGetMaxConnections();


    return 0;
}