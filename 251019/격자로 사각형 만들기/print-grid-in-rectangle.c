#include <stdio.h>

int main() {
    int i,j,n;
    scanf("%d",&n);
    int a[n][n];
    

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i == 0 || j == 0)
                a[i][j] = 1;
        }
    }


    for(i=1;i<n;i++){
        for(j=1;j<n;j++){
            a[i][j] = a[i-1][j] + a[i][j-1]+a[i-1][j-1];
        }
    }







    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    


    return 0;
}