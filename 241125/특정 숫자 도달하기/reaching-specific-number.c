#include <stdio.h>

int main() {
    int i,a[10];
    float sum=0,cnt=0;

    for(i=0;i<10;i++){
        scanf("%d",&a[i]);

        if(a[i] >= 250){
            break;
        }

        else{
            sum+=a[i];
        }
        cnt++;
    }
    printf("%.0lf %.1lf",sum,sum/cnt);

    return 0;
}