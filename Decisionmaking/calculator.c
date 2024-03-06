#include <stdio.h>
// Calculator
int main() {
   printf("CALCULATOR!!!\n\n");
   printf("Kindly input any two numbers: \n");
    int num1;
    int num2;
    printf("Input the 1st number: ");
    scanf("%d",&num1);

    printf("Input the 2nd number: ");
    scanf("%d",&num2);

    int operation;
    printf("\n\n1. Addition    2. Subtraction\n3.Multiplication     4. Division\n\nSelect from the following options: ");
   scanf("%d",&operation);
   switch(operation){
       case 1:
            printf("%d + %d = %d",num1,num2,num1+num2);
            break;
        case 2:
            printf("%d - %d = %d",num1,num2,num1-num2);
            break;
        case 3:
            printf("%d * %d = %d",num1,num2,num1*num2);
            break;
        case 4:
            printf("%d / %d = %d",num1,num2,num1/num2);
            break;
        default:
            printf("Invalid Selection");
   }
   return 0;
}