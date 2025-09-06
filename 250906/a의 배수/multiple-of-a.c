#include <stdio.h>

int main() {
    int n,a,i;
    scanf("%d %d",&n,&a);

    i = 1;
    //printf("%d",n);

    while(i != n+1){
        if(i % a == 0)
            printf("1\n");
        /*else if(a % i == 0)
            printf("1\n");*/
        else
            printf("0\n");

        i++;
    }





    return 0;
}