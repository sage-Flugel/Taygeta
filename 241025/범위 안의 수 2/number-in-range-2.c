#include <stdio.h>

int main() {
    int i,a;
    double sum = 0,avg = 0;
    for(i = 0; i<10;i++){
        scanf("%d",&a);
        sum += a;
    }
    avg = sum/10;

    printf("%d %d",sum,avg);
    return 0;
}