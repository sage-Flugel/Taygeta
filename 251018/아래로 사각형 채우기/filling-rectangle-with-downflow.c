#include <stdio.h>

int main() {
    int n,i,j,num=1;
    scanf("%d",&n);
    int a[n][n];
    
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            a[i][j] = num;
            num++;
        }
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }


    return 0;
}