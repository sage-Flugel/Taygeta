
#include <stdio.h>

int main() {
    int n,m,cnt=0;
    int a[100];

    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++)
        scanf("%d ",&a[i]);
	
    for(int i=0; i<n;i++){
        if(a[i] == m)
            cnt++;
    }
    printf("%d",cnt);
    
    
	return 0;

}
