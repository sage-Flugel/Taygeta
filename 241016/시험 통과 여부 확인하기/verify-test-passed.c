#include <stdio.h>

int main() {
    int a = 0;
    scanf("%d",&a);

    if (a >= 80)
        printf("pass");
    else
        printf("%d more score",80-a);
    return 0;
}