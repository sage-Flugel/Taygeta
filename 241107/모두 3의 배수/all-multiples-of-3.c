#include <stdio.h>

int main() {
    int a,b,c,d,e,i=1;
    
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    scanf("%d",&e);
    
    if(a % 3 != 0)
        i = 1;
    if (b % 3 != 0)
        i = 1;
    if (c % 3 != 0)
        i = 1;
    if (d % 3 != 0)
        i = 1;
    if (e % 3 != 0)
        i = 1;
    
    if(i == 1)
        printf("1");
    else
        printf("0");
    






    return 0;
}