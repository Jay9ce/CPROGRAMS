#include <stdio.h>

int main(){
    char name[20];
    int score;
    printf("Software Engineering Grading System!\n\n");
    printf("Kindly input your name: ");
    scanf("%s", name);

    int terminator;
    do{
        printf("Input your score: ");
        scanf("%d", &score);

    
        if((score < 0) || (score > 100)){
        printf("\nInvalid score!");
        }else if(score < 40){
        printf("\n\nHello %s, your score is %d and your grade is F!", name,score);
        }else if(score < 45){
            printf("\n\nHello %s, your score is %d and your grade is E!", name,score);    
        }else if(score < 50){
            printf("\n\nHello %s, your score is %d and your grade is D!", name,score);
        }else if(score < 60 ){
        printf("\n\nHello %s, your score is %d and your grade is C!", name,score);
        }else if(score < 70 ){
        printf("\n\nHello %s, your score is %d and your grade is B!", name,score);   
        }else{
            printf("\n\nHello %s, your score is %d and your grade is A!", name,score);
        }

        printf("\n\nInput 1: to input another score and 0: to exit:  ");
        scanf("%d", &terminator);
    }while(terminator == 1);
        
    return 0;
    
}