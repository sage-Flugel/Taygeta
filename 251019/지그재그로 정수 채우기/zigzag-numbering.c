#include <stdio.h>

int main() {
    int n,m,k,i,j,num=0,cnt=0;
    scanf("%d %d",&n,&m);
    int a[n][m];



    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            a[j][i] = num;
            num++;
        }
    }
    /*
    
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(j%2==0)
                printf("%d ",a[i][j]);
        }

        for(j=m-1;j>=0;j--){
            if(j%2==1)
                printf("%d ",a[i][j]);
        }
        printf("\n");
    }
       */
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            if(j % 2 == 0)
                printf("%d ", a[i][j]);
    
            else
                printf("%d ", a[n-1-i][j]);
        }
        printf("\n");
}
    
    
    return 0;
}

