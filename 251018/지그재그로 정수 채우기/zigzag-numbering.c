#include <stdio.h>

int main() {
    int n,m,i,j,num=0;
    scanf("%d %d",&n,&m);
    int a[n][m];
    
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            a[j][i] = num;
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