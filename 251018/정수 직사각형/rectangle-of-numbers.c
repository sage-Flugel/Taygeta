#include <stdio.h>

int main() {
    int n,m,i,j,num=1;
    scanf("%d %d",&n,&m);

    int a[n][m];

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            a[i][j] = num;
            num++;
        }
    }

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}