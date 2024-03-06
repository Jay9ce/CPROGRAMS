#include <stdio.h>


int main() {

    int userInput;
    printf("Input any integer number: ");
    scanf("%d", &userInput);
    int fact = 1;
    do{
        fact = fact * userInput;
        userInput--;
    }while(userInput > 0);
    printf("\n\nFactorial = %d", fact);

    return 0;

}