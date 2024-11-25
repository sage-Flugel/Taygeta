#include <stdio.h>

int main() {
    int i;
    double sum=0,cnt=0,a[8];

    for(i=0;i<8;i++){
        scanf("%lf ",&a[i]);
        sum+=a[i];
        cnt++;
    }
    
    printf("%.1lf",sum/cnt);
    return 0;
}