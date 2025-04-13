#include <stdio.h>

int main() {
    int a[100];
    int b[100] = { 0 };
    int i,n;

    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);

        if(a[i]%2 == 0){
            b[i] = a[i];
        }
        


    }
   
    
    for(i = 0; i<n;i++){
        if(b[i] > 1)
            printf("%d ",b[i]);
    }
    

    return 0;
}