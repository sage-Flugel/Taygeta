#include <stdio.h>

int main() {
    int n,m,ans,cnt=0;
    int a[100];

    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d ",&a[i]);

        if(a[i] == 2)
            cnt++;

        if(cnt == 3){
            ans = i+1;
            break;
            }
    }
    printf("%d",ans);

    return 0;
}