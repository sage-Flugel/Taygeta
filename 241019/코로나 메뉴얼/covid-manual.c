#include <stdio.h>

int main() {
    //a1 증상 a2 열
    char a1,b1,c1;
    int a2,b2,c2,k=0;
    
    scanf("%c %d\n%c %d\n%c %d",&a1,&a2,&b1,&b2,&c1,&c2);
    if(a1 == 'Y' && a2 >= 37)
        k += 2;
    else
        k+=0;

    if(b1 == 'Y' && b2 >= 37)
        k += 2;
    else
        k+=0;

    if(c1 == 'Y' && c2 >= 37)
        k += 2;
    else
        k+=0;


    if (k >= 4)
        printf("E");
    else
        printf("N");

    return 0;
}