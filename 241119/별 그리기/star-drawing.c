#include <stdio.h>

int main() {
    int a,i,j,k;
    scanf("%d",&a);
    k = a-1;
    if(a==1)
        printf("*");
    else{
        for(i=1;i<=a+2;i++){
            if(i % 2 == 1){
                for(j=k;j>0;j--){
                    printf(" ");

                }
                for(j=0;j<i;j++){
                    printf("*");
                }
                k--;
                printf("\n");
            }
        }
        k = 1;
        for(i=a;i>0;i--){
            if(i % 2 == 1){
                for(j=0;j<k;j++){
                    printf(" ");

                }
                for(j=0;j<i;j++){
                    printf("*");
                }
                k++;
                printf("\n");
            }
        }
    }
    return 0;
}