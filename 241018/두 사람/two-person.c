#include <stdio.h>

int main() {
    int a1,b1;
    char a2 = 'a',b2 ='a';

    scanf("%d %c\n%d %c",&a1,&a2,&b1,&b2);

    if(a1 >= 19 && a2 == 'M')
        printf("1");

    else if(b1 >= 19 && b2 == 'M')
        printf("1");

    else    
        printf("0");



    return 0;
}