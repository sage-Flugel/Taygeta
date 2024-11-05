#include <stdio.h>

int main() {
    int a,b,i;
    bool check = false;
    scanf("%d %d",&a,&b);
    for(i =a;i<=b;i++){
        if(i % 1920 == 0 && i % 2880 ==0)
            check = true;
    }
    if(check == true)
        printf("1");
    else
        printf("0");
        
    return 0;
}