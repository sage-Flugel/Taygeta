#include <stdio.h>
#include <limits.h>

int main() {
    int n,i,j,cnt=0;
    int a[1000];
    int ans = 0;

    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }

    for (i = 0; i < n; i++) {
    cnt = 0;
    for (j = 0; j < n; j++) {
        if (i != j && a[i] == a[j])  
            cnt++;
    }
    if (cnt == 0 && a[i] > ans)
        ans = a[i];
}
    if(ans == 0)
        printf("-1");
    else
        printf("%d",ans);


    return 0;
}