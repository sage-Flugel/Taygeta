#include <stdio.h>

int main() {
    int a,b,i,k=0;
    scanf("%d %d",&a,&b);

    for(i =a;i<=b;i++){
        if(i%2==1){
            k*=2;
        }
        else{
            k+=3;
        }
        printf("%d ",k);
    }
    return 0;
}