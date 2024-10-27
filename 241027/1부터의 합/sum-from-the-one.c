#include <stdio.h>

int main() {
    int a,i,k=0;
    scanf("%d",&a);
    for(i = 1; i<=100; i++){
        k+=i;
        if(k >= a){
            printf("%d",i);
            break;
        }
    
    
    }
    return 0;
}