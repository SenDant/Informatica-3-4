#include <stdio.h>
int main() {
    // 1. are these integers equal?
    int num1;
    int num2;

    printf("Please enter two integers: ");
    scanf("%d %d", &num1, &num2);

    if(num1 == num2) {
        printf("%d and %d are equal.\n", num1, num2);
    }
    else { printf("%d and %d are not equal.\n", num1, num2);}
    // 2. is this integer an odd or even number?
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
    // 3. ????

    //Calculator
    printf("This is a calculator of two integers.\n");
    int data1;
    int data2;
    char symbol;
    char sum = "+";
    char sub = "-";
    char div = "/";
    char mul = "x";
    int add = (data1 + data2);
    int subs = (data1 - data2);
    int divi = (data1/data2);
    int multi = (data1*data2);
    printf("Please enter your operation: \n");
    scanf("%d %c %d", data1, symbol, data2);

        if(symbol == sum); {
        printf("%d + %d is %d.", data1, data2, add);
        }
        else if(symbol == sub) {
            printf("%d - %d is %d.", data1, data2, subs);
        }
        else if (symbol == div) {
            printf("%d/%d is %d.", data1, data2, divi);
        }
        else if ();

    

    return 0;
}