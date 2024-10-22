#include <stdio.h>

int main() {
    int i,cnt,a=0;
    for(i = 0; i<10;i++){

        scanf("%d",&a);

        if(a % 2 == 1)
            cnt++;
    }
    printf("%d\n",cnt);

    return 0;
}