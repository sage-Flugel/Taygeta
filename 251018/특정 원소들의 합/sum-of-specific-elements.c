#include <stdio.h>
/*
색칠부분

00 @  @  @
10 11 @  @
20 21 22 @
30 31 32 33

*/
int main() {
    int a[4][4];
    int i,j;

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            scanf(" %d",&a[i][j]);
        }
    }

    printf("%d",a[0][0]+a[1][0]+a[1][1]+a[2][0]+a[2][1]+a[2][2]+a[3][0]+a[3][1]+a[3][2]+a[3][3]);




    return 0;
}