#include <stdio.h>

int main() {
    int a,i,b,sum=0;
    scanf("%d",&a);
    for(i =0;i<a;i++){
        scanf("%d",&b);
        if(b % 2 == 1 && b%3 == 0)
            sum+=b;
    }
    return 0;
}