#include <stdio.h>

int main() {
    int i,a[10]={1};
    for(i=0;i<10;i++){
        scanf("%d ",&a[i]);
        if(a[i]==0)
            break;
    }
    for(i=9;i>=0;i--){
        if(a[i] == 0)
            continue;
        else
            printf("%d ",a[i]);
    }
    return 0;
}