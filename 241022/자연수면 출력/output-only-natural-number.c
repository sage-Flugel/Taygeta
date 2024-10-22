#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);

    if(a > 0){
        for(int i =0; i < b;i++){
            printf("%d",a);
        }
    }
    else
        printf("0");
    return 0;
}