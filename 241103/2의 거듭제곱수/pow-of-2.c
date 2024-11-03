#include <stdio.h>

int main() {
    int a,cnt=0;
    scanf("%d",&a);

    while(1){
        if(a % 2 == 0){
            a /= 2;
            cnt++;
        }
        if(a == 1)
            break;
    }
    printf("%d",cnt);
    return 0;
}