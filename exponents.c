#include <stdio.h>
#include <math.h>
int main(){
    int n;
    int xp;
    //long double result = 1.0;
    printf("Please insert a base number: ");
scanf(" %d", &n);
printf("Now enter an exponent: ");
scanf(" %d", &xp);
/*while(exp != 0) {
    result *= n;
    --exp;}*/
     int result = pow( n, xp);
printf("%d to the power of %d is: %d\n", n, xp, result);
    return 0;
}