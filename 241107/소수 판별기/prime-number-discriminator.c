#include <stdio.h>

int main() {
    int a,i,c=1;
    scanf("%d",&a);
    for(i = 2; i<a;i++){
        if(a % i == 0)
            c = 0;
    }
    if(c == 1)
        printf("P");
    else
        printf("C");
    return 0;
}