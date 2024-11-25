#include <stdio.h>

int main() {
    int i;
    char a[11];

    for(i=0;i<10;i++)
        scanf("%c ",&a[i]);
    
    for(i = 9;i>=0;i--)
        printf("%c",a[i]);

    return 0;
}