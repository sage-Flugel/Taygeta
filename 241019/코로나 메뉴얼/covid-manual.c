#include <stdio.h>

int main() {
    //a1 증상 a2 열
    char a1,b1,c1;
    int a2,b2,c2,k;
    
    scanf("%c %d",&a1,&a2);
    if(a1 == 'Y' && a2 >= 37)
        k += 2;
    else
        k+=1;
    
    scanf("%c %d",&b1,&b2);
    if(b1 == 'Y' && b2 >= 37)
        k += 2;
    else
        k+=1;

    scanf("%c %d",&c1,&c2);
    if(c1 == 'Y' && c2 >= 37)
        k += 2;
    else
        k+=1;

    if (k == 6)
        printf("E");
    else
        printf("N");
    
    
    




    return 0;
}