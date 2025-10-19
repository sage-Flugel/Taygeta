#include <stdio.h>

int main() {
    int n,m,i,j;
    scanf("%d %d",&n,&m);

    int arr[n][n];

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            arr[i][j] = 0;
        }
    }

    for(i=0;i<m;i++){
        int r,c;
        scanf("%d %d",&r,&c);
        arr[r-1][c-1] = r*c;
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}