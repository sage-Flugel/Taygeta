#include <stdio.h>

int main() {
    int n,i;
    double sum=0,cnt=0,a[5]={0};
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%lf ",&a[i]);
        sum+=a[i];
        cnt++;
    }





    printf("%.1lf\n",sum/cnt);

    if(sum/cnt >= 4)
        printf("Perfect");
    else if(sum/cnt >= 3)
        printf("Good");
    else
        printf("Poor");
    return 0;
}