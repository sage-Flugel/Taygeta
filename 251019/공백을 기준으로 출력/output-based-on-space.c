#include <stdio.h>
#include <string.h>

int main() {
    char a[100];
    char b[100];

    fgets(a,100,stdin);
    fgets(b,100,stdin);
   
    for(int i=0;i<strlen(a);i++){
        if(a[i] != ' ' && a[i] != '\n')
            printf("%c",a[i]);
    }   

    for(int i=0;i<strlen(b);i++){
        if(b[i] != ' ')
            printf("%c",b[i]);
    }    

    return 0;
}