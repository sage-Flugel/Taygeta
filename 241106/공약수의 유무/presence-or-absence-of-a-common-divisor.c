#include <stdio.h>

int main() {
    int a,b,i;
    int check = 0;
    scanf("%d %d",&a,&b);

    for(i =a;i<=b;i++){
        if(i % 1920 == 0 && i % 2880 ==0)
            check = 1;
    }

    if(check == 1)
        printf("0");

    else
        printf("1");
        
    return 0;
}