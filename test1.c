#include <stdio.h>
#include "./dependency.h"

void dependency() {
    printf("Hii, from internet");
}

void callDependency() {
    dependency();
}
