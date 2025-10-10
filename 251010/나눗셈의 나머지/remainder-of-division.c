#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);

    int onecnt[9] = {0};

    for(int i = 0; i<12; i++){
        if(a % b == 0)
            onecnt[0]++;
        
        else if(a % b == 1)
            onecnt[1]++;
        
        else if(a % b == 1)
            onecnt[1]++;
        
        else if(a % b == 1)
            onecnt[1]++;

        else if(a % b == 1)
            onecnt[1]++;
            
    }


    return 0;
}


