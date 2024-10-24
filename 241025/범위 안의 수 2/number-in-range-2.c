#include <stdio.h>

int main() {
    int i,a;
    double sum = 0,avg = 0;
    for(i = 0; i<10;i++){
        scanf("%d",&a);
        if(0 <= a && a <=200){
            sum += a;
            avg+=1;
        }
    }
    avg = sum/10;

    printf("%.0lf %.1lf",sum,sum/avg);
    return 0;
}