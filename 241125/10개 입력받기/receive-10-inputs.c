#include <stdio.h>

int main() {
    int i,c=0;
    double a[10],sum=0,cnt=0;

    for(i=0;i<10;i++){
        scanf("%lf",&a[i]);
        cnt++;
        sum+=a[i];

        if(a[i] == 0){
            cnt--;
            printf("%.0lf %.1lf",sum,sum/cnt);
            c=1;
        }
        
    }
    if(c == 0)
        printf("%.0lf %.1lf",sum,sum/cnt);
        
    return 0;
}