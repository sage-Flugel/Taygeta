#include <stdio.h>

int main() {
    int a,i;
    int cnt=0;
    scanf("%d",&a);

    for(i=1;i<=15;i++){
        if(cnt==2)
            break;
        
        printf("%d ",a*i);

        if((a*i)%5==0)
            cnt++;
    }
    return 0;
}