#include <stdio.h>

int main() {
    int n,i,a[100];


    for(i=0;i<100;i++){
        scanf("%d",&a[i]);
        if(a[i] == 0){
            printf("%d",a[i-1]+a[i-2]+a[i-3]);
            break;
        }
    }
    return 0;
}