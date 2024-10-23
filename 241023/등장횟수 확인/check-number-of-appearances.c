#include <stdio.h>

int main() {
    int a,cnt=0;
    for(int i =0;i<5;i++){
        scanf("%d",&a);
        if(a % 2 == 0)
            cnt++;
    }
    printf("%d",cnt);
    return 0;
}