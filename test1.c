#include <stdio.h>
#include "./test1.h"

void dependency() {
    printf("Hii, from internet");
}

void callDependency() {
    dependency();
}
