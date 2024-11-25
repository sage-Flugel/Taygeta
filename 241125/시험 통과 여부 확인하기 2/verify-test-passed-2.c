#include <stdio.h>

int main() {
    int n,i,j,cnt=0;
    double a[10][4] = { 0 },sum,avg=0;
    scanf("%d",&n);

    for(i=0;i<n;i++){
        sum = 0;
        for(j=0;j<4;j++){
            scanf("%lf",&a[i][j]);
            sum+=a[i][j];
        }
        avg = sum/4;
        if(avg >= 60){
            printf("pass\n");
            cnt++;
        }
        else
            printf("fail\n");

    }

    printf("%d",cnt);




    return 0;
}