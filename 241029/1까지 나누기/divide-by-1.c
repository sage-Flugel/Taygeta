#include <stdio.h>

int main() {
    int a,i,cnt=0;
    scanf("%d",&a);

    for(i = 1; i<=a;i++){
        if(a <= 1){
            break;
        }
        else{
            cnt++;
            a /=i;
            
        }
        
    }
    printf("%d",cnt+1);
    return 0;
}