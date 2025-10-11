#include <stdio.h>

int main() {
    int n,m,ans,cnt=0;
    int a[100];

    scanf("%d",&n);
    scanf("%d",&m);

    for(int i=0;i<n;i++){
        scanf("%d ",&a[i]);

        if(a[i] == 2)
            cnt++;

        if(cnt == 3){
            ans = i;
            break;
            }
    }
    printf("%d",ans-1);

    return 0;
}