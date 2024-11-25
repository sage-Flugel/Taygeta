#include <stdio.h>

int main() {
    int i,c=0;
    int a[10],sum=0,cnt=0;

    for(i=0;i<10;i++){
        scanf("%d ",&a[i]);
        if(a[i]==0){
            c=1;
            continue;
        }

        else{
            if(a[i]%2==0 && c != 1){
                sum+=a[i];
                cnt++;
            }    
        }    
    }
    printf("%d %d",cnt,sum);


    return 0;
}