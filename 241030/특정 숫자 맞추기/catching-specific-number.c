#include <stdio.h>

int main() {
    int a,i;
    while(1){
        scanf("%d",&a);
        if(a < 25){
            printf("Higher");
        }
        else if ( a > 25){
            printf("Lower");
        }
        else{
            printf("Good");
            break;
        }
    }
    return 0;
}