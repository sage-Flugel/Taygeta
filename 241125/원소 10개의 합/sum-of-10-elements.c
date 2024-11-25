#include <stdio.h>

int main() {
    int i,a=0,b[10];

    for(i=0;i<10;i++){
        scanf("%d",&b[i]);
        a+=b[i];
    }
    printf("%d",a);

    return 0;
}