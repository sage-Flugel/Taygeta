#include <stdio.h>

int main() {
    int tmp[3];
    char cgh[3];
    int hsp[4] = {0};

    for(int i=0;i<3;i++){
        scanf(" %c %d",&cgh[i],&tmp[i]);
    }
    for(int i=0;i<3;i++){
        if(cgh[i] == 'Y' && tmp[i] >=37)
            hsp[0]++;
        else if(cgh[i] == 'N'&& tmp[i] >=37)
            hsp[1]++;
        else if(cgh[i] == 'Y')
            hsp[2]++;
        else
            hsp[3]++;
    }

    printf("%d %d %d %d ",hsp[0],hsp[1],hsp[2],hsp[3]);
    if(hsp[0] > 1)
        printf("E");

    return 0;
}