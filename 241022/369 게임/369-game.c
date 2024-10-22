#include <stdio.h>

int main() {
    int a,i,forten;
    scanf("%d",&a);

    for(i=1; i<= a;i++){
        forten = i % 10;
        if(forten == 1 || forten == 2 || forten == 4 || forten == 5 || forten == 7 || forten == 8)
            printf("%d ",i);
        else if(i % 3 == 0 || i % 60 == 0 || i % 90 == 0 || forten % 3 == 0)
            printf("0 ");
        else
            printf("%d ",i);

    }
    return 0;
}