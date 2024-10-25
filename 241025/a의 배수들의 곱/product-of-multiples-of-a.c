#include <stdio.h>

int main() {
    int a,b,sum=1,i;
    scanf("%d %d",&a,&b);
    for(i = 1; i<= b; i++){
        if(i % a == 0)
            sum*=i;
    }
    printf("%d",sum);
    return 0;
}