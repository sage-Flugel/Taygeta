#include <stdio.h>
#include <string.h>

int main() {
    char a[100];
    char check;
    int i,cnt=0;
    fgets(a,100,stdin);
    scanf("%c",&check);

    for(i=0;i<strlen(a);i++){
        if(a[i] == check)
            cnt++;
    }

    printf("%d",cnt);

    return 0;
}