#include <stdio.h>

int main() {
    int a[100];
    int cnt=0;

    for(int i=0;i<100;i++){
        scanf("%d ",&a[i]);
        cnt++;

        if(a[i] == 0)
            break;

        else if(a[i] % 2 == 0)
            a[i]= a[i]/2;

        else
            a[i]+=3;
    }

    for(int i = 0; i<cnt-1;i++){
        printf("%d ",a[i]);
    }

    
    return 0;
}