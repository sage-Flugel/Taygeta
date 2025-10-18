#include <stdio.h>
//행 = row 열 column
int main() {
    int a[2][4];
    int i,j;
    float row[2]={0};
    float col[4]={0};
    float ans;

    for(i=0;i<2;i++){
        for(j=0;j<4;j++){
            scanf(" %d",&a[i][j]);
        }
    }

    for(i=0;i<2;i++){//가평
        for(j=0;j<4;j++){
            row[i] += a[i][j];
        }
    }

    for(i=0;i<4;i++){//세평
        for(j=0;j<2;j++){
            col[i] += a[j][i];
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<4;j++){
            ans+=a[i][j];
        }
    }
    printf("%.1f %.1f\n",row[0]/4,row[1]/4);
    printf("%.1f %.1f %.1f %.1f\n",col[0]/2,col[1]/2,col[2]/2,col[3]/2);
    printf("%.1f",ans/8);

    
    return 0;
}