#include <stdio.h>

int main() {
    int numbers[10] = {2,5,18,4,8,1,90,16,3,43};

    int maxNumber;
    int minNumber;
    int arraySum = 0;
    for(int i = 9; i > -1; i--){
        printf("Value at index %d = %d\n", i, numbers[i]);
        arraySum += numbers[i];
        if(numbers[i] > maxNumber){
            maxNumber = numbers[i];
        }
        if(numbers[i] < minNumber){
            minNumber = numbers[i];
        }
    }
    printf("The maximum number in the array = %d\n", maxNumber);
    printf("\nThe minimum number in the array = %d", minNumber);
    printf("\nThe Average = %d", arraySum/10);
    return 0; 
}