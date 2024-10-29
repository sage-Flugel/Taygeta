#include <stdio.h>

int main() {
    int a,i,cnt=0;
    scanf("%d",&a);

    for(i = 1; i<=15;i++){
        if(a <= 1){
            
            break;
        }
        else{
            a = a / i;
            cnt++;
        }
        
    }
    printf("%d",cnt);
    return 0;
}