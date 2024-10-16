#include <stdio.h>

int main() {
    int a=0;
    
    scanf("%d",&a);
  
    a = a == 100 ? 1:0;

    if (a == 1)
        printf("pass");
    else
        printf("failure");

    return 0;
}