#include <stdio.h>
int main(){
int row;
int col;
int mul;
for(int row = 1; row < 6; row++) {
        for( col = 1; col < 6; col++) {
             mul = row * col;
            printf("%d\t", mul);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}