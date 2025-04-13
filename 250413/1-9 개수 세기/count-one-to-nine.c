#include <stdio.h>

int main(){
    int a,n,i;
    int arr[100] = {0};
    int cntarr[10] = {0};

    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }


    for(i=0;i<100;i++){
        cntarr[arr[i]]++;
        if(arr[i] == 0)
            break;
    }

    for(i = 1;i<10;i++){
        printf("%d\n",cntarr[i]);
    }

    return 0;
}