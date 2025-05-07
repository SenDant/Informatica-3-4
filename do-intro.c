#include <stdio.h>
int main (){
int n;
int count = 0;
printf("Please enter a positive number: \n");
scanf(" %d", &n);
if(n >= 0) {
    do {
        n = n / 10; //another option is n /=10;
        ++count; } 
        while(n != 0);
printf("Number of digits: %d \n", count);
}
 else {printf("Hey! that's not a positive number! try again.\n");}

    return 0;
}