#include <stdio.h>

int main() {
    int a,i;
    scanf("%d",&a);

    for(i = 1; i <= a;i++){
        if(i % 2==0 || i % 3 == 0){
            printf("1 ");
        }
        else
            printf("0 ");
    }
    return 0;
}