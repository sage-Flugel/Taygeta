#include <stdio.h>

int main() {
    double a,b,p = 0;
    while(1){
        scanf("%lf",&a);
        if(20 <= a && a < 30){
            b+=a;
            p++;
        else
            break;
        }
    }
    printf("%.2lf",b/p);
    return 0;
}