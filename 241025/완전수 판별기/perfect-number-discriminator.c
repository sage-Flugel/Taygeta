#include <stdio.h>

int main() {
    int a,i,sum=0;
    scanf("%d",&a);
    for(i= 1; i<a;i++){
        if(a % i == 0){
            sum+=i;
           
        }
    }
    if(sum == a)
        printf("P");
    else
        printf("N");
    return 0;
}