#include <stdio.h>

int main() {
    int a,cnt=0;
    scanf("%d",&a);
    while(1){
        if(a == 1)
            break;

        if(a % 2 == 0)
            a/=2;
        else
            a = (a*3)+1;
        cnt++;
    }
    printf("%d",cnt);
    return 0;
}