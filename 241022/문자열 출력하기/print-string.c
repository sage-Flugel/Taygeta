#include <stdio.h>

int main() {
    int a;
    char b[12]= "LeebrosCode";
    scanf("%d",&a);

    for(int i =0; i < a; i++)
        printf("%s\n",b);

    return 0;
}