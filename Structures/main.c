#include <stdio.h>

int main() {

struct cars {
    char brand [20];
    char colour [10];
    int model;
    int milelage;
    float price;
}josh;

    printf("Please enter your prefered brand: ");
    scanf("%s",josh.brand);
    printf("Please enter your prefered colour: ");
    scanf("%s",josh.colour);
    printf("Please enter your prefered model: ");
    scanf("%d",&josh.model);
    printf("Please enter your prefered milelage: ");
    scanf("%d",&josh.milelage);
    printf("Please enter your prefered price in $: ");
    scanf("%f",&josh.price);

    printf("\nThese are your preference: ");
    printf("\n%s \n%s \n%d \n%d \n%.2f",josh.brand,josh.colour,josh.model,josh.milelage,josh.price);
    

}