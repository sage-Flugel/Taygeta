#include <stdio.h>

int main() {
    int i,cnt,a;
    for(i = 0; i<10;i++){
        scanf("%d",&a);
        if(a % 2 == 1)
            cnt+=1;
    }
    printf("%d\n",cnt);

    return 0;
}