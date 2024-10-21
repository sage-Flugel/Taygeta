#include <stdio.h>

int main() {
    int a,i=0;
    scanf("%d",&a);
    while(i<=a){
        if(3 % 0 == 0)
            printf("%d ",i);
        i++;
    }
    return 0;
}