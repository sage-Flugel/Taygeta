#include <stdio.h>

int main() {
    int a,i,j;
    scanf("%d",&a);
/*i가 1일때 2번
i가 2일때 1번
i가 3일때 0번*/
    for(i=1;i<=a;i++){

        for(j=a-i;j>0;j--)
            printf(" ");
        

        for(j=1;j<=i;j++)
            printf("* ");
        
        
        printf("\n");
    }

    for(i=a;i>0;i--){
        for(j=1;j<=a-i+1;j++) // 공백을 하나 더 출력
            printf(" ");

        for(j=i-1;j>0;j--)
            printf("* ");
        
    printf("\n");
    }










    return 0;
}