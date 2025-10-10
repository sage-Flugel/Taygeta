#include <stdio.h>

int main() {
    int a;
    int num[10] = {0};

    for(int i=0;i<100;i++){
        scanf("%d",&a);
 
        if(a==0)
            break;

        else if(a / 10 == 1)
            num[0]++;
        else if(a / 10 == 2)
            num[1]++;
        else if(a / 10 == 3)
            num[2]++;
        else if(a / 10 == 4)
            num[3]++;
        else if(a / 10 == 5)
            num[4]++;
        else if(a / 10 == 6)
            num[5]++;
        else if(a / 10 == 7)
            num[6]++;
        else if(a / 10 == 8)
            num[7]++;
        else if(a / 10 == 9)
            num[8]++;
    }

    for(int i=0;i<9;i++){
        printf("%d - %d\n",i+1,num[i]);
    }









    return 0;
}