#include <stdio.h>

int main() {
    char a[10];
    int i;
    for(i=0;i<10;i++){
        scanf("%c",&a[i]);
    }
    printf("%c %c %c",a[1],a[4],a[7]);
    return 0;
}