#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);

    if(a == 0)
        printf("%s",b >=19 ? "MAN" : "BOY");
    else if(a == 1)
        printf("%s",b >=19 ? "WOMAN" : "GIRL");
    
    

    return 0;
}