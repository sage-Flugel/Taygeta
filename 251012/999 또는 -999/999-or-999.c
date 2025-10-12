#include <stdio.h>
#include <limits.h>

int main() {
    int a[100];
    int i;
    int big=INT_MIN,sml=INT_MAX;

    for(i = 0;i<100;i++){
        scanf("%d ",&a[i]);
        if(a[i] == 999 || a[i] == -999) break;

        if(big < a[i]) big = a[i];
        if(sml > a[i]) sml = a[i];

    }

    printf("%d %d",big,sml);
    return 0;
}