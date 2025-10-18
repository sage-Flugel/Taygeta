#include <stdio.h>
//같으면 0
int main() {
    int n,m,i,j;
    scanf("%d %d",&n,&m);

    int a[n][m];
    int b[n][m];
    int ans[n][m];

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf(" %d",&a[i][j]);
        }
    }

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf(" %d",b[i][j]);
        } 
    }

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(a[i][j] == b[i][j])
                ans[i][j] = 0;
            else
                ans[i][j] = 1;
        } 
    }

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d ",ans[i][j]);
        } 
        printf("\n");
    }

    return 0;
}