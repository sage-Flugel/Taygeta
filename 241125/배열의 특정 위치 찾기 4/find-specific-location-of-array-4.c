#include <stdio.h>

int main() {
    int i;
    int a[10],sum=0,cnt=0;

    for(i=0;i<10;i++){
        scanf("%d ",&a[i]);
        if(a[i]==0)
            continue;
        else{
            if(a[i]%2==0){
                sum+=a[i];
                cnt++;
            }    
        }    
    }
    printf("%d %d",cnt,sum);


    return 0;
}