#include <stdio.h>

int main() {
    int a,i,j,k=1;
    scanf("%d",&a);

    for(i = 1; i <= a; i++){
        
        for(j = 0; j < k; j++){
            printf("*");
        }
        k+=2;
        
        
        printf("\n");
    }
    return 0;
}