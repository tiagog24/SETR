#include <stdio.h>
#include <stdint.h>

uint16_t maxConnections;

void configInit(){

    maxConnections = 0;
}

void configSetMaxConnections(uint16_t value){

    maxConnections = value;
}

uint16_t configGetMaxConnections(){

    printf("Value of maxConnections: %d\n", maxConnections);
}
