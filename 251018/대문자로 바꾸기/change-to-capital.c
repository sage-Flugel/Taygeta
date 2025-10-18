#include <stdio.h>

int main() {
    int a[5][3];
    int i,j;
    


    for(i=0;i<5;i++){
        for(j=0;j<3;j++){
            scanf(" %c",&a[i][j]);
        }
    }

    for(i=0;i<5;i++){
        for(j=0;j<3;j++){
            printf("%c ",a[i][j]-32);
        }
        printf("\n");
    }




    return 0;
}