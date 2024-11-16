#include <stdio.h>

int main() {
    int a,i,j;
    scanf("%d",&a);

    for(i=0; i < a; i++){
        for(j=0; j < i*2; j++){
            printf(" ");
        }

        for(j=a+(a-1)-(2*i);j>0;j--){
            printf("* ");
        }

        printf("\n");
    }

    for(i=a-2; i >= 0; i--){
        for(j=0; j < i*2; j++){
            printf(" ");
        }

        for(j=a+(a-1)-(2*i);j>0;j--){
            printf("* ");
        }

        printf("\n");
    }
   






    return 0;
}