#include <stdio.h>

int main() {
    int i,a[10],c1=0,c2=0;//c1 짝수 c2 홀수

    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
        if(i % 2 == 0){
                c1 += a[i];
        }
        if(i % 2 == 1){
                c2 += a[i];
        }
    }
    if(c2 > c1)
        printf("%d",c2-c1);
    else
        printf("%d",c1-c2);
    return 0;
}