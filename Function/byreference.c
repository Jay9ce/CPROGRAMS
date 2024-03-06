#include <stdio.h>

void change(int *x) {
   *x = 10;
}

int main() {
   int num = 5;
   change(&num);
   printf("The value of num is %d", num);
   return 0;
}