#include <stdio.h>
int main() {
    //are these integers equal?
    int num1;
    int num2;

    printf("Please enter two integers: ");
    scanf("%d %d", &num1, &num2);

    if(num1 == num2) {
        printf("%d and %d are equal.\n", num1, num2);
    }
    else { printf("%d and %d are not equal.\n", num1, num2);}
    //is this integer an odd or even number?
    int num;
    int two = 2;
    int zero = 0;

    printf("Please enter an integer: \n");
    scanf("%d", &num);

    if((num % two) == zero ) {
    printf("%d is an even number.\n", num); }
    else {
        printf("%d is an odd number.\n", num);
    }
    //what

    //Calculator
    printf("This is a calculator of two integers.\n");
    int


    return 0;
}