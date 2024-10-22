#include <stdio.h>

int main() {
    int a,b,c,d;
    scanf("%d %d",&a,&b);

    if (a > b){
        c = a;
        d = b;
    }
    else{
        c = b;
        d = a;
    }
    
    for(int i= c; i>=d; i--){
        printf("%d ",i);
    }

    return 0;
}