#include <stdio.h>
 
int main() {
    char firstname[20]; // Hold firstname
    char lastname[20]; // Hold lastname
    char phonenumber[12]; // Hold phonenumber
    unsigned int age; // Hold age
    printf("Please enter your first name: ");
    scanf("%s",firstname);

    printf("Please enter your last name: ");
    scanf("%s",lastname);

    printf("Please enter your phone number: ");
    scanf("%s",phonenumber);

    printf("Please enter your age: ");
    scanf("%d",&age);

    printf("Good Evening %s, \n\n",firstname);

    printf("First Name: %s \nLast Name: %s \nPhone Number: %s \nAge: %d",firstname,lastname,phonenumber,age);
 
    return 0;
}