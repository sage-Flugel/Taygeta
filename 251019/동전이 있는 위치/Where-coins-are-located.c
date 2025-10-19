#include <stdio.h>
//(기본개념)그냥 다 0으로 초기화하고 점에만 1 입력하라고
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
        arr[r-1][c-1] = 1;
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}