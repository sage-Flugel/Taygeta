#include <stdio.h>

int main() {
    int a,i;
    scanf("%d",&a);

    one = a % 10;

    for(i=1;i<=a;i++){
        if(i % 2== 0 || one != 5 || (i % 3== 0 && i % 9 != 0))
            continue
        else
            printf("%d ",i);

    }
    return 0;
}