#include <stdio.h>

int main() {
    int a,i,k=1;
    scanf("%d",&a);
    for(i = 1; i<=10; i++){
        k*=i;
        if(k >= a){
            printf("%d",i);
            break;
        }
    
    
    }
    return 0;
}