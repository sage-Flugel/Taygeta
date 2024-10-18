#include <stdio.h>

int main() {
    int a,b,;
    scanf("%d %d",&a,&b);

    if(a >= 90){
        if(b >= 95)
            printf("100000");
        else if (b>= 90)
            printf("50000");
    }
    else
        printf("%d",1 > 2);

    return 0;
}