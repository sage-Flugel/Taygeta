#include <stdio.h>

int main() {
    int a,b,i;
    double cnt=0,sum=0;
    scanf("%d %d",&a,&b);
    for(i = a; i<=b;i++){
        if(i % 5 == 0 || i % 7 == 0){
            cnt++;
            sum+=i;
        }
    }
    printf("%lf %.1lf",sum,sum/cnt);
    return 0;
}