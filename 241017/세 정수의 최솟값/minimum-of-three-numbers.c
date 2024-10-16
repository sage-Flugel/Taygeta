#include <stdio.h>

int main() {
    int a,b,c;
    int min;
    scanf("%d %d %d",&a,&b,&c);

    if(b >=a && c>=a)//a가 최소일때
        min = a;
    else if (a >= b && c >= b)//b가 최소일때
        min = b;
    else
        min = c;
    printf("%d",min);
    return 0;
}