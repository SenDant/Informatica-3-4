#include <stdio.h>
int main(){
    int n;
    int exp;
    long double result = 1.0;
    int i = 1;
printf("Please insert a base number: ");
scanf(" %d", &n);
printf("Now enter an exponent: ");
scanf(" %d", &exp);
while(exp != 0) {
    result *= n;
    --exp;
} printf("Result: %.0Lf\n", result);

    return 0;
}