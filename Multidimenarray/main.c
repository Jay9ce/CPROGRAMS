#include <stdio.h>

int main() {
    
    int num[2][3] = {{2, 4, 5},{9 , 6, 3}};

    for(int i = 0; i < 2;i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", num[i][j]);
        }
        printf("\n");
    } 
}