#include <stdio.h>

int main() {

    int a[5][5] = {0};
    int i,j;

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(i == 0 || j == 0)
                a[i][j] = 1;
        }
    }


    for(i=1;i<5;i++){
        for(j=1;j<5;j++){
            a[i][j] = a[i-1][j] + a[i][j-1];
        }
    }







    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    






    return 0;
}