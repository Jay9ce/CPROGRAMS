#include <stdio.h>
#include <string.h>

int main() {
    char name[20];
    char password[10];
    char confirmPassword[10];
    
    printf("This is your first time here sign in to proceed\n\n");
    printf("Input Name: ");
    scanf("%s",name);
    do{
        printf("Create Password: ");
        scanf("%s",password);
        printf("Confirm Password: ");
        scanf("%s",confirmPassword);
        
        if(strcmp(password,confirmPassword) != 0){
            printf("Password and Confirm password must be same\n\n");
        }
    }while(strcmp(password,confirmPassword) != 0);
    
    
    
    char userPassword[10];
    printf("\n\nLog In\n\n");
    
    printf("Input password: ");
    scanf("%s",userPassword);
    
    int isAuth = strcmp(password,userPassword);
    
    if(isAuth == 0){
        printf("Access Granted!\n\n");
        printf("Welcome Mr/Mrs, %s\n",name);
    }else{
        printf("Access Denied!\nPassword Incorrect\n");
    }
    
    return 0;
}