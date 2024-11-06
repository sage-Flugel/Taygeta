#include <stdio.h>

int main() {
    int a,b,c,i,t=0;

    scanf("%d %d %d",&a,&b,&c);

    for(i = a; i<=b;i++){
        if(i % c == 0 || c % i == 0)
            t = 1;
    }
    if(t == 0)
        printf("NO");
    else
        printf("YES");

    return 0;
}