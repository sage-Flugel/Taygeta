#include <stdio.h>
#include <limits.h>

int main() {
    int a[100];
    int n,ans=0;
    int sml= INT_MAX;

    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d ",&a[i]);
        if(a[i] < sml)
            sml = a[i];
}
    for(int i=0;i<n;i++){
        if(a[i]==sml)
            ans++;
}


    printf("%d %d",sml,ans);

    return 0;
}