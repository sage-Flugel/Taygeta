#include <stdio.h>

int main() {
    int i;
    double a[11] = { 0 },sum1=0,sum2=0,cnt=0;

    for(i=1;i<11;i++){
        scanf("%lf",&a[i]);

        if(i % 2 == 0)
            sum1+=a[i];

        if(i % 3 == 0){
            sum2+=a[i];
            cnt++;
            }
    }
    printf("%.0lf %.1lf",sum1,sum2/cnt);
    return 0;
}