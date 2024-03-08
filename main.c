#include <stdio.h>
// collects user's data and displays an option
int main() {
   printf("CONVERSION SCALE!!!\n\n");
    double userValue;
    int originalUnit;
    int finalUnit;
    double result;

    printf("Kindly input the value to be converted: ");
    scanf("%lf",&userValue);

    printf("\nPlease input the unit of your value\n\n1. Metres(m)    2. Centimetres(cm)\n3. Millimetres(mm)     4. Kilometres(km)\n5. Inch\n\nSelect from the following options: ");
    scanf("%d",&originalUnit);


    printf("\nPlease input the unit to be converted\n\n1. Metres(m)    2. Centimetres(cm)\n3. Millimetres(mm)     4. Kilometres(km)\n5. Inch\n\nSelect from the following options: ");
    scanf("%d",&finalUnit);

    // conversion process from each units to the other and displays the appropriate result
   switch(originalUnit){
       case 1:
            if (finalUnit == 2) {
                result =  userValue * 100;
                printf("The result of your conversion is: %fcm", result);
            }else if (finalUnit == 3) {
                result = userValue * 1000;
                printf("The result of your conversion is: %fmm", result);
            }else if (finalUnit == 4) {
                result = userValue/1000;
                printf("The result of your conversion is: %fkm", result);
            }else if (finalUnit == 5) {
                result = userValue * 39.3701;
                printf("The result of your conversion is: %fin", result);
            }else{
                printf("Invalid selection!!");
            }
            break;
        case 2:
            if (finalUnit == 1) {
                result =  userValue/100;
                printf("The result of your conversion is: %fm", result);
            }else if (finalUnit == 3) {
                result = userValue/10;
                printf("The result of your conversion is: %fmm", result);
            }else if (finalUnit == 4) {
                result = userValue/100000;
                printf("The result of your conversion is: %fkm", result);
            }else if (finalUnit == 5) {
                result = userValue/2.54;
                printf("The result of your conversion is: %fin", result);
            }else{
                printf("Invalid selection!!");
            }
            break;
        case 3:
            if (finalUnit == 1) {
                result =  userValue/1000;
                printf("The result of your conversion is: %fm", result);
            }else if (finalUnit == 2) {
                result = userValue/10;
                printf("The result of your conversion is: %fcm", result);
            }else if (finalUnit == 4) {
                result = userValue/1000000;
                printf("The result of your conversion is: %fkm", result);
            }else if (finalUnit == 5) {
                result = userValue/25.4;
                printf("The result of your conversion is: %fin", result);
            }else{
                printf("Invalid selection!!");
            }
            break;
        case 4:
            if (finalUnit == 1) {
                result =  userValue * 1000;
                printf("The result of your conversion is: %fm", result);
            }else if (finalUnit == 2) {
                result = userValue * 100000;
                printf("The result of your conversion is: %fcm", result);
            }else if (finalUnit == 3) {
                result = userValue * 1000000;
                printf("The result of your conversion is: %fmm", result);
            }else if (finalUnit == 5) {
                result = userValue * 39370;
                printf("The result of your conversion is: %fin", result);
            }else{
                printf("Invalid selection!!");
            }
            break;
        case 5:
            if (finalUnit == 1) {
                result =  userValue/39.37;
                printf("The result of your conversion is: %fm", result);
            }else if (finalUnit == 2) {
                result = userValue * 2.54;
                printf("The result of your conversion is: %fcm", result);
            }else if (finalUnit == 3) {
                result = userValue * 25.4;
                printf("The result of your conversion is: %fmm", result);
            }else if (finalUnit ==4) {
                result = userValue/39370;
                printf("The result of your conversion is: %fkm", result);
            }else{
                printf("Invalid selection!!");
            }
            break;
        default:
            printf("Invalid Selection");
   }
   return 0;
}