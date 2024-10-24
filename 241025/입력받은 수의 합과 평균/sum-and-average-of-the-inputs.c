#include <stdio.h>

int main() {
    int i,a,b;
    double avg=0,sum=0;
    scanf("%d",&a);
    for(i = 0; i< a; i++){
        scanf("%d",&b);
        sum += b;
    }
    printf("%.0lf %.1lf",sum,sum/a);
    return 0;
}