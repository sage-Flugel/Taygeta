#include <stdio.h>

int main() {
    int i,n,sum;
    int a[50];

    scanf("%d",&n);

    a[0] = 1;
    a[1] = n;

    printf("1 ");
    printf("%d ",n);

    for(i=2;i<200;i++){
        sum = a[i - 2] + a[i - 1];
        a[i] = a[i - 2] + a[i - 1];
        printf("%d ",sum);

        if(sum >= 100)
            break;
    }




    return 0;
}