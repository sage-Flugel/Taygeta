#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
//(a % 100 == 0 && a % 400 != 0)
    if(a % 4 == 0){
        if (a >= 100){
            if ((a % 100 == 0 && a % 400 != 0) || a%4 == 0)
                printf("true");
            else
                printf("false");
        }
        else
            printf("true");
    }
    else
        printf("false");
        

    return 0;
}