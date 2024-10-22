#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    while(b <= a){
        if(a%2==0)
            printf("%d ",a);
        a--;
    }
    return 0;
}