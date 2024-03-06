#include <stdio.h>



int main() {

    printf("Input any integer number: ");
    int userInput;
    scanf("%d", &userInput);
    int sum =0;
    do{
        sum = sum + userInput;
        userInput--;
    }while(userInput > 0);
    printf("\n\nSum = %d", sum);

    return 0;
}