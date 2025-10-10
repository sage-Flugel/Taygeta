#include <stdio.h>

int main() {
    int a;
    int std[10] = {0};

    for(int i=0;i<100;i++){
        scanf("%d ",&a);
        if(a==0)
            break;
/*
        else if(a == 100)
            std[0]++;

        else if(a >= 90)
            std[1]++;

        else if(a >= 80)
            std[2]++;

        else if(a >= 70)
            std[3]++;

        else if(a >= 60)
            std[4]++;

        else if(a >= 50)
            std[5]++;

        else if(a >= 40)
            std[6]++;

        else if(a >= 30)
            std[7]++;

        else if(a >= 20)
            std[8]++;

        else if(a >= 10)
            std[9]++;*/
        else if(a == 100)
            std[9]++;

        else if(a >= 90)
            std[8]++;

        else if(a >= 80)
            std[7]++;

        else if(a >= 70)
            std[6]++;

        else if(a >= 60)
            std[5]++;

        else if(a >= 50)
            std[4]++;

        else if(a >= 40)
            std[3]++;

        else if(a >= 30)
            std[2]++;

        else if(a >= 20)
            std[1]++;

        else if(a >= 10)
            std[0]++;
    }

    for(int i=10;i>0;i--){
        printf("%d - %d\n",i*10,std[i-1]);
    }

    return 0;
}