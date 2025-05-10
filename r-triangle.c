#include <stdio.h>

int main(){
    int h;
    int a;
    int b;

    printf("please enter triangle height: ");
    scanf(" %d", &h);

   

    for(a = 1; a <= h; a++){
        for(b = 1; b <= a; b++){
            printf("*");
        }
        printf("\n");
    }
}