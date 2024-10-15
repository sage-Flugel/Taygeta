#include <stdio.h>

int main() {
    char c = 'A';
    double a =0.0, b = 0.0;
    scanf("%c\n%lf\n%lf",&c,&a,&b);
    
    printf("%c\n%.2lf\n%.2lf",c,a,b);

    return 0;
}