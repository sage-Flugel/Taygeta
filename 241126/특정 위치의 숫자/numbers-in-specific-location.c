#include <stdio.h>

int main() {
    int i;
    int a[10] = { 0 };
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    printf("%d",a[2]+a[4]+a[9]);
    return 0;
}