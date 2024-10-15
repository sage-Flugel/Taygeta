#include <stdio.h>

int main() {
    char c = 'C';
    double a =0, b = 0;
    scanf("%c\n%lf\nlf",&c,&a,&b);
    
    printf("%c\n%.2lf\n%.2lf",c,a,b);

    return 0;
}