#include <stdio.h>

int main()
{
    puts("This is a software to find the sum of any three numbers");
    int num1;
    int num2;
    int num3;
    printf("Input the 1st number: ");
    scanf("%d",&num1);

    printf("Input the 2nd number: ");
    scanf("%d",&num2);

    printf("Input the 3rd number: ");
    scanf("%d",&num3);

    printf("%d + %d + %d = %d",num1,num2,num3,num1+num2+num3);
    return 0;
}