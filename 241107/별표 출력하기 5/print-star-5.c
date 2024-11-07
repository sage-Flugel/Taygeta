#include <stdio.h>

int main() {
    int a,i,j;
    scanf("%d",&a);

    for(i = a; i > 0; i--){
        if(i != 1){
            for(j = i; j > 0; j--){
                printf("*");
            }
            printf(" ");
            for(j = i; j > 0; j--){
                printf("*");
            }
        }
        printf("\n");
        else
            printf("*");
    }
    return 0;
}