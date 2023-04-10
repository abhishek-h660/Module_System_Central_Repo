#include <stdio.h>
#include "./test1.h"

void depend(){
printf("Hii, from internet");
}
void callDependency() {
    depend();
}
