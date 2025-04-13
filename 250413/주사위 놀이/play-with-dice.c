#include <stdio.h>

int main() {
    int i;
    int arr[10];
    int cntarr[10] = {0};

    for(i=0; i < 10;i++){
        scanf("%d",&arr[i]);
        cntarr[arr[i]]++;
    }

    for(i = 1; i<7; i++){
        printf("%d - %d\n",i,cntarr[i]);
    }

    return 0;
}