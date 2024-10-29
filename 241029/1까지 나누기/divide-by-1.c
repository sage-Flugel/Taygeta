#include <stdio.h>

int main() {
    int a,i,cnt=1;
    scanf("%d",&a);

    for(i = 1; i<=a;i++){
        cnt++;
        if(a <= 1){
            
            break;
        }
        else{
            a /=i;
            
        }
        
    }
    printf("%d",cnt);
    return 0;
}