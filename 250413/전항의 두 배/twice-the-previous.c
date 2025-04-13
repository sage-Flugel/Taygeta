#include <stdio.h>

int main() {
    int a,b,i,n;

    int arr[10];

    scanf("%d %d",&a,&b);

    arr[0] = a;
    arr[1] = b;

    printf("%d ",a);
    printf("%d ",b);

    for(i=2;i<10;i++){
        arr[i] = (2*arr[i-2]) +arr[i-1];
        printf("%d ",arr[i]);
    }



    return 0;
}