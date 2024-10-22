#include <stdio.h>

int main() {
    int a,n;
    scanf("%d %d",&a,&n);

    for(int i = 0; i<n;i++){
        printf("%d\n",a+(n*i));
        
    }
    return 0;
}