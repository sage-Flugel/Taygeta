#include <stdio.h>

int main() {
    int a,i,j,k;
    scanf("%d",&a);
    for(i = 1; i <= a;i++){
        scanf("%d",&k);
        if(k % 3 == 0 || k % 2 == 1)
            printf("%d\n",k);
        }







    return 0;
}