#include <stdio.h>

int main() {
    int a,i,j,k;
    scanf("%d",&a);

    for(i = a; i > 0; i--){
        for(j = i; j > 0; j--){
            for(k = i; k > 0; k--){
                printf("*");
            }
            printf(" ");
        }
        printf("\n");
        
            
        
    }
    return 0;
}