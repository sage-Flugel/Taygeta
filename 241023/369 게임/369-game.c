#include <stdio.h>

int main() {
    int a,i,forten,for3;
    scanf("%d",&a);

    for(i=1; i<= a;i++){
        forten = i % 10;
        for3 = 1;
        /*if(30 < i && i < 40)
            for3 = 0;*/
        if(i == 10 || i == 20 || i == 40 || i == 50 || i == 70 || i == 80)
            printf("%d ",i);
        else if(i % 3 == 0 || i % 60 == 0 || i % 90 == 0 /*|| for3 == 0*/)
            printf("0 ");
        else
            printf("%d ",i);

    }
    return 0;
}