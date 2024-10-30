#include <stdio.h>

int main() {
    int a,cnt=0;
    while(10){
        scanf("%d",&a);
        if(a % 2 == 0){
            printf("%d\n",a/2);
        }
        else
            continue;
        cnt++;
        if(cnt == 3)
            break;
    }
    return 0;
}