#include <stdio.h>

int main() {
    int a,i,j;
    scanf("%d",&a);

    for(i=a;i>0;i--){
        for(j=i; j>0; j--){
            printf("* ");
        }
        printf("\n");
    }
    for(i=2; i<=a;i++){
        for(j=0; j<i;j++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}