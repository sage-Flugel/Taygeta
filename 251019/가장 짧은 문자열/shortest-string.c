#include <stdio.h>
#include <string.h>

int main() {
    char a[21];
    char b[21];
    char c[21];

    int big=0,sml=22;

    scanf("%s\n%s\n%s",a,b,c);

    
    if(strlen(a) > big) big = strlen(a);
    if(strlen(b) > big) big = strlen(b);
    if(strlen(c) > big) big = strlen(c);

    if(strlen(a) < sml) sml = strlen(a);
    if(strlen(b) < sml) sml = strlen(b);
    if(strlen(c) < sml) sml = strlen(c);


    printf("%d",big-sml);

    return 0;
}