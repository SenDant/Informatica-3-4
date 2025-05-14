#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){

int guess;
srand(time(NULL));
int cf = (rand() % 2) + 1;
int result;
int head = 1;
int tails = 2;
printf("------------------Coin Flip Simulator------------------\n");
printf("Can you guess what did the coin fall on, head or tails?\n");
printf("1.head   2.tails\n");
printf("Insert your guess: ");
scanf(" %d", &guess);
if (guess <= 0) {
    printf("That's neither of the options, try again.\n");
} else {
if(guess < 3) {
if(cf == 1) {
        result = head;
        if (guess == result) { printf("You guessed it! it is head!\n"); }
        else { printf("Sorry! you guessed wrong, it's actually head!\n"); }
    } 
if (cf == 2) {
        result = tails;
        if (guess == result) { printf("You guessed it! it is tails!\n"); }
        else { printf("Sorry! you guessed wrong, it's actually tails!\n"); }
} } else printf("That's neither of the options, try again.\n"); }

return 0;
}