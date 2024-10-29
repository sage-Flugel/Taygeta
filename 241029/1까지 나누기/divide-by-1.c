#include <stdio.h>

int main() {
    int a,i,cnt=0;
    scanf("%d",&a);
    for(i = 0; i<=a;i++){
        if( a / i >= 0){
            break;
        }
        cnt++;
    }
    printf("%d",cnt);
    return 0;
}