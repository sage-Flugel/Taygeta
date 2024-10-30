#include <stdio.h>

int main() {
    int a,b;
    char k;
    while(1){
        scanf("%d %d %c",&a,&b,&k);
        if(k != 'C')
            printf("%d\n",a*b);
        else{
            printf("%d\n",a*b);
            break;
        }
    }
    return 0;
}