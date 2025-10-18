#include <stdio.h>

int main() {
    int a[4][4];
    int i,j;
    int k;

    for(i =0;i<4;i++){
        for(j=0;j<4;j++){
            scanf("%d ",&a[i][j]);
        }
    }

    for(i =0;i<4;i++){
        k=0;
        for(j=0;j<4;j++){
            k+=a[i][j];
        }
        printf("%d\n",k);
    }


    return 0;
}