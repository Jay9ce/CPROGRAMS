#include <stdio.h>
// Calculator
int main() {
   printf("Age Group Classifier Software\n\n");
   printf("Kindly input your age to get your age group: ");
   int age;
   scanf("%d",&age);
   if(age < 0){
       printf("Invalid Age");
   }else if(age < 5){
       printf("Your are an infant");
   }else if(age < 13){
        printf("You are Child");
   }else if(age < 20){
       printf("You are a teenager");
   }else{
       if(age > 100){
            printf("You are an adult but alittle bit to old");
       }else{
           printf("You are an adult");
       }
   }
   int option;
   printf("\n\n1. Create a profile    2. Delete Account\n3.Find User     4. Logout\n\nSelect from the following options: ");
   scanf("%d",&option);
   switch(option){
       case 1:
            printf("Profile Created Successfully");
            break;
        case 2:
            printf("Deleted Successfully");
            break;
        case 3:
            printf("Search User");
            break;
        case 4:
            printf("Logout Successfully");
            break;
        default:
            printf("Invalid Selection");
   }
 
   return 0;
}