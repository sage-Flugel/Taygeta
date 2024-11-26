#include <stdio.h>

int main() {
    int n,i;
    int a[100] = { -1 };
    int ans[100] = { -1 };
    scanf("%d",&n);



    for(i=0;i<n;i++){
        scanf("%d",&a[i]);

        if(a[i] % 2 == 0){
            ans[i] = a[i];
        }
    }

    for(i = n-1; i >= 0; i--){
        if(ans[i] == -1)
            continue;
        else
            printf("%d ",ans[i]);
    }

    return 0;
}