#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);

    int onecnt[10] = {0};
    int cnt = 0;

    while(a>2){
        if(a % b == 0)
            onecnt[0]++;
        else if(a % b == 1)
            onecnt[1]++;
        else if(a % b == 2)
            onecnt[2]++;
        else if(a % b == 3)
            onecnt[3]++;
        else if(a % b == 4)
            onecnt[4]++;
        else if(a % b == 5)
            onecnt[5]++;
        else if(a % b == 6)
            onecnt[6]++;
        else if(a % b == 7)
            onecnt[7]++;
        else if(a % b == 8)
            onecnt[8]++;
        else if(a % b == 9)
            onecnt[9]++;

        a/=b;
    }

    for(int i=0;i<10;i++){
        if(onecnt[i] > 0)
            cnt =cnt + onecnt[i]*onecnt[i];
    }

    printf("%d",cnt);
    return 0;
}
