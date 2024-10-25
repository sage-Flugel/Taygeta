#include <stdio.h>

int main() {
    int a,b,i;
    scanf("%d %d",&a,&b);
    int sum = a;
    if(b != 0){
        for(i = 1; i < b; i++){
            sum *=a;
        }
    }
    else
        sum = 1;
    printf("%d",sum);
    return 0;
}