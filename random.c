#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;
    int i = 0;
     srand(time(NULL));
    printf("----Welcome to the dice roll simulation!----\n");
printf("Please enter the wanted number of dice rolls: ");
scanf(" %d", &n);
int dr = (rand() % 6) + 1;
do {
dr = (rand() % 6) + 1;
++i;
printf("Dice Roll %d: %d\n", i, dr);
} while (i < n);
    return 0;
}