#include <stdio.h>

const int size = 8;

int main() {

    char board[size][size];

    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if (i % 2 > 0){
                if (j % 2 > 0){
                    board[i][j] = '*';
                }else{
                    board[i][j] = '0';    
                }
            }else{
                if (j % 2 > 0){
                    board[i][j] = '0';
                }else{
                    board[i][j] = '*';
                }
            }
            
            if(i == 3 || i == 4){
                board[i][j] = '0';
            }
            if(i > 4){
                if (i % 2 > 0){
                    if (j % 2 > 0){
                        board[i][j] = '#';
                    }else{
                        board[i][j] = '0';    
                     }
                }else{
                    if (j % 2 > 0){
                        board[i][j] = '0';
                    }else{
                        board[i][j] = '#';
                    }
            }

            }
        }
    }

     for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            printf(" %c  ", board[i][j]);
        }
        printf("\n\n");
    }
    return 0;
}