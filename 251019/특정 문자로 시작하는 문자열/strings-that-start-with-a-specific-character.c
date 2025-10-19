#include <stdio.h>
#include <string.h>

int main() {
    int i,n,cnt=0;
    char vss;
    float ans=0;

    scanf("%d",&n);

    char a[n][20];

    for(i =0;i < n;i++){
        scanf("%s",a[i]);
    }

    scanf(" %c",&vss);


    for(i=0;i<n;i++){
        if(a[i][0] == vss){
            cnt++;
            ans+=strlen(a[i]);
        }

    }

    printf("%d %.2f",cnt,ans/cnt);
    return 0;
}