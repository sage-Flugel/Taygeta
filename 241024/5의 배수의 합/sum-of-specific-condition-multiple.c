#include <stdio.h>

int main() {
    int A,B,i,a,b,sum=0;
    scanf("%d %d",&A,&B);
    if(A > B){
        A = a;
        B = b;
    }
    else{
        A = b;
        B = a;
    }
    for(i = a; i <= b; i++){
        if(i % 5==0)
            sum+=i;
    }
    printf("%d",sum);
    
    return 0;
}