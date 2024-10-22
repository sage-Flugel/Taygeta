#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    while(a <= b){
        if(b%2==0)
            printf("%d ",b);
        b--;
    }
    return 0;
}