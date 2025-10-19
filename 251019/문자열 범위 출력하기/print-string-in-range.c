#include <stdio.h>
//(기본개념) 공백과 \n으로 문자열을 구분하니, 공백을 쓰고싶으면  fgets
int main() {
    char a[101];
    fgets(a,101,stdin);

    for(int i = 2;i<10;i++)
        printf("%c",a[i]);
        
    return 0;
}