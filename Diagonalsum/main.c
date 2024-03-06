#include <stdio.h>
#define ROW 4
#define COL 4
int sumDiagonal(int arr[ROW][COL]);
int main() {
    int matrix[ROW][COL] = {
        {1,2,3,5},
        {2,5,6,3},
        {4,5,6,2},
        {4,5,6,3},
    };

    printf("Diagonal Sum = %d", sumDiagonal(matrix));
    return 0;

}

int sumDiagonal(int arr[ROW][COL]){
    int sum = 0;
    for(int i = 0; i < ROW; i++){
        sum += arr[i][i];
        if(i != (ROW-1)-i){
            sum += arr[i][(ROW-1)-i];
        }
    }
    return sum;
}