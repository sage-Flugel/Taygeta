#include <stdio.h>

int main() {
    int a,i=1;
    scanf("%d",&a);
    while(i<=a){
        if(i % 3 == 0)
            printf("%d ",i);
        i++;
    }
    return 0;
}