#include <stdio.h>

int main() {
    int a=0;
    char p[7];
    scanf("%d",&a);
    p = a == 100 ? "pass":"failure";
    printf("%s",p);
    
    return 0;
}