#include <stdio.h>

int main() {
    double a,b,c;
    scanf("%lf %lf",&a,&b);
    c= (a+b)/(a-b);
    printf("%.2lf",c);
    return 0;
}