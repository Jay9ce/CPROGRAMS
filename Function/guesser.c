#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int randomNumber (int n);
void startGame ();

int main() {
     
     
     startGame();

     return 0;
}

int randomNumber (int n){
    srand(time(NULL));
    long r = rand();
    int random = r % n;
    return random;
}

void startGame (){
    printf("Random Guessing Game, Guess the Right Number to Win Amazing Prizes!!!\n\n");

    int counter = 1;
    int N = 100;
    int R = randomNumber (N);

    int userGuess;
    do{
        printf("Guess any number between 0 and 99:  ");
        scanf("%d", &userGuess);
        if(userGuess == R){
        printf("CONGRATULATIONS, YOU JUST WON $1,000,000 !!!\n\n");
        break;
        }else{
            if(counter < 5) {
                if (userGuess > R){
                    printf("Try Again, You have %d attempts left\n Hints: Guess a lower number!\n\n", 5-counter);
                    counter++;
                }else{
                    printf("Try Again, You have %d attempts left\n Hints: Guess a higher number!\n\n", 5-counter);
                    counter++;
                }
                
            }else{
                printf("SORRY, GAMER OVER!!!\n");
                break;
            }
        
        }
        

    }while(1);

    printf("User Guess: %d, Computer Random Number: %d", userGuess, R);

}