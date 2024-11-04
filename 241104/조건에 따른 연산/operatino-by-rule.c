#include <stdio.h>

int main() {
    int a,cnt=0;
    scanf("%d",&a);
    while(1){
        if(a >= 1000)
            break;
        if(a % 2 == 0)
            a = (a*3)+1;
        else
            a=(a*2)+2;
        cnt++;

    }
    printf("%d",cnt);
    return 0;
}