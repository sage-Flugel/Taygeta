#include <stdio.h>

int main() {
    int a,i,one;
    scanf("%d",&a);

    

    for(i=1;i<=a;i++){
        one = i % 10;
        if(i % 2== 0 || one == 5 || (i % 3== 0 && i % 9 != 0))
            continue;
        else
            printf("%d ",i);

    }
    return 0;
}