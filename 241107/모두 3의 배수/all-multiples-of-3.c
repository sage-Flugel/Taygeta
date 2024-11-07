#include <stdio.h>

int main() {
    int a,b,c,d,e,i=1;
    
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    scanf("%d",&e);
    
    if(a % 3 != 0)
        i = 0;
    if (b % 3 != 0)
        i = 0;
    if (c % 3 != 0)
        i = 0;
    if (d % 3 != 0)
        i = 0;
    if (e % 3 != 0)
        i = 0;
    
    if(i == 1)
        printf("1");
    else
        printf("0");
    

    return 0;
}