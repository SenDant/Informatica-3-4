#include <stdio.h>

int main() {
    char snack1[] = "Ice Cream";
    char snack2[] = "Cookies";
    char snack3[] = "Chocolates";
    
    float price1 = 25.0;
    float price2 = 15.25;
    float price3 = 12.5;

    int stock1 = 15;
    int stock2 = 10;
    int stock3 = 22;

    printf("Welcome to the Snack Shop!\n");
    printf("---------------------------\n");
    printf("1. %s - $%.1f - %d Availables\n", snack1, price1, stock1);
    printf("2. %s - $%.2f - %d Availables\n", snack2, price2, stock2);
    printf("3. %s - $%.1f - %d Availables\n", snack3, price3, stock3);

    return 0;
}