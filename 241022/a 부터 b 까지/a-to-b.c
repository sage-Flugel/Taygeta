#include <stdio.h>

int main() {
    int a,b,i,k=0;
    scanf("%d %d",&a,&b);
    
    for(i = a;a <= b;i++){
        printf("%d ",a);
        if(i%2==1){
            a*=2;
        }
        else{
            a+=3;
        }
        
    }
    return 0;
}