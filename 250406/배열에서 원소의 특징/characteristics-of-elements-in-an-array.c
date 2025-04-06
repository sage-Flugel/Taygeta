#include <stdio.h>

int main() {
    int a[10];
    int i;

    for(i = 0; i < 10;i++)
        scanf("%d ",&a[i]);
    
    for(i = 0; i < 10;i++){
        if(a[i] % 3 == 0){
            printf("%d",a[i-1]);
            break;
        }
    }

    return 0;
}