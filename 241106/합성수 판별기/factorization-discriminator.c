#include <stdio.h>

int main() {
    int a,i,k;
    scanf("%d",&a);
    for(i = 2; i<a;i++){
        if(a % i == 0)
            k = 0;
        else
            k=1;
    }
    if(k == 1)
        printf("C");
    else
        printf("N");
    return 0;
}