#include <stdio.h>

int main() {
    int a=0;
    
    scanf("%d",&a);
  
    a = a == 100 ? 0:1;

    if (a == 1)
        printf("pass");
    else
        printf("failure");

    return 0;
}