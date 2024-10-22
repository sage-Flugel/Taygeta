#include <stdio.h>

int main() {
    int a,i,cnt1=0,cnt2=0;
    for(i = 0; i< 10; i++){
        scanf("%d",&a);
        if(a % 3 == 0)
            cnt1++;
        else if(a % 5 == 0)
            cnt2++;
        }

    printf("%d %d",cnt1,cnt2);
    return 0;
}