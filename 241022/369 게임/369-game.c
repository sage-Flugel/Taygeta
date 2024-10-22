#include <stdio.h>

int main() {
    int a,i,forten;
    scanf("%d",&a);

    for(i=1; i<= a;i++){
        forten = i % 10;
        if(forten == 10 || forten == 20 || forten == 40 || forten == 50 || forten == 70 || forten == 80)
            printf("0 ");
        else if(i % 3 == 0 || i % 60 == 0 || i % 90 == 0 || forten % 3 == 0)
            printf("0 ");
        else
            printf("%d ",i);

    }
    return 0;
}