#include <stdio.h>

int main() {
    int a,i,k;
    scanf("%d",&a);
    for(i = 2; i<a;i++){
        if(a % i == 0){
            k = 1;
            break;
        }
        else
            k=0;
    }
    if(k == 1)
        printf("C");
    else
        printf("N");
    return 0;
}