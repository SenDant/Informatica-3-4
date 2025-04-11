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
    // 3. date?
    int day;
    printf("--Please write a number between 1 and 7: \n");
    scanf("%d", &day);
    if (day == 1){
        printf("-it is Monday\n");
    }
    if (day == 2){
        printf("-it is Tuesday\n");
    }
    if (day == 3){
        printf("-it is Wednesday\n");
    }
    if (day == 4){
        printf("-it is Thursday\n");
    }
    if (day == 5){
        printf("-it is Friday\n");
    }
    if (day == 6){
        printf("-it is Saturday\n");
    }
    if (day == 7){
        printf("-it is Sunday\n");
    }

    //Challengue. couldn't do it.
    printf("---This is a calculator of two integers.---\n");
    int data1;
    int data2;
    char symbol;
    char add[] = "addition";
    char sub[] = "substraction";
    char div[] = "division";
    char mul[] = "multiplication";
    int addition = data1 + data2;
    int substraction = data1 - data2;
    int division = data1/data2;
    int multiplication = data1*data2;
    printf("--Please enter two integers n: \n");
    scanf("%d %d", &data1, &data2);
    printf("Now enter the type of operation you want: \n");
    scanf("%c", &symbol);

        if(add); {
        printf("- %d + %d is %d.\n", data1, data2, addition);
        }

    

    return 0;
}