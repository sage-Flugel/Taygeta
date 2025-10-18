#include <stdio.h>

int main() {
    int i,big,sml;
    big = 0;
    sml = 1001;
    int a[10];

    for(i=0;i<10;i++){
        scanf("%d ",&a[i]);
    }

    for(i=0;i<10;i++){
        if(a[i] < 500){//작은쪽
            if(big < a[i])
                big=a[i];
        }
        else{//큰쪽
            if(sml > a[i])
                sml = a[i];
        }
    }

    printf("%d %d",big,sml);
    return 0;
}