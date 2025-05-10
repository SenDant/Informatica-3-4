#include <stdio.h>

int main() {
int n;
    printf("Enter a positive number: ");
    scanf("%d", &n);

    int i;
    int sum = 0;

    for (i = 1; i <=n; ++i){
        sum = sum + i;
    }
    printf("%d \n", sum);
//Exercise 2
int n2;
    printf("Enter a positive number: ");
    scanf("%d", &n2);

    int u;
    int fact = 1;

    for (u = 1; u < n2+ 1; ++u){
        fact = fact * u;
    }

    printf("%d \n", fact);
    return 0;
}