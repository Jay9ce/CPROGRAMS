#include <stdio.h>

int main() {
    int *a;
    int b = 5;
    a = &b;
    *a = 1;
    printf("%d", b); 
}