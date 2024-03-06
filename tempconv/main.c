#include <stdio.h>

int main() {

    int option;
    float c, f;
    printf("This program converts temperature from Celsius to Fahrenheit and vice versa!");
    printf("\n\n1. Convert to Celsius    2. Convert to Fahrenheit\n\nSelect from the following options: ");
   scanf("%d",&option);
   switch(option){
       case 1:
            printf("Enter the value of temperature in farhenheit: ");
            scanf("%f", &f);
            c = (5.0/9.0)*(f-32);
            printf("\n%f is the value of the temperature in Celsius", c);
            break;
        case 2:
            printf("Enter the value of temperature in Celsius: ");
            scanf("%f", &c);
            f = (1.8*c) + 32;  
            printf("\n%f is the value of the temperature in Fahrenheit", f);
            break;
        default:
            printf("Invalid Selection");
   }
   return 0;
}