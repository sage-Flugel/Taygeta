#include <stdio.h>

int main() {
    int width,length;

    scanf("%d %d",&width,&length);
    width +=8;
    length *=3;
    printf("%d\n%d\n%d",width,length,width*length);
    return 0;
}