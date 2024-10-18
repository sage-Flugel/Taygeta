#include <stdio.h>

int main() {
    int a= 0;
    scanf("%d",&a);
    
    if(a == 12 || a <= 2)
        printf("Winter");
    else if (a <= 5)
        printf("Spring");
    else if (a <= 8)
        printf("Summer");
    else
        printf("Fall");


    return 0;
}