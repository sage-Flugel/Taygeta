#include <stdio.h>

int main() {
    int a,b,c,i,k;
    scanf("%d %d %d",&a,&b,&c);
    for(i = a; i <=b;i++){
        if(i % c == 0)
            k=1;
    }
    if(k == 1)
        printf("YES");
    else
        printf("NO");
    return 0;
}