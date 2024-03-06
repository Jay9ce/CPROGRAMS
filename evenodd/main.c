#include <stdio.h>

int main() {

    int userInput;
    printf("Please input an integer: ");
    scanf("%d", &userInput);

    if (userInput % 2 == 0){
        printf("\n%d is an even number!", userInput);
    }else{
        printf("\n%d is an odd number!", userInput);
    }
    return 0;
}