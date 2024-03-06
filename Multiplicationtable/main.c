#include <stdio.h>

int main() {

  for(int j = 1; j <= 12; j++){
    for (int i = 1; i <= 12; i++) {
        printf("2 x %d = %d\n", i,2*i);
    }
    printf("\n\n");
  }
    
    return 0;
}