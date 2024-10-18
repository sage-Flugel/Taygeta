#include <stdio.h>

int main() {
    int a1,a2,b1,b2;
    scanf("%d %d\n%d %d",&a1,&a2,&b1,&b2);
    //수학점수(a1,b1) 우선

    if(a1 > b1)
        printf("A");
    else if (b1 < a1)
        printf("B");
    else{
        if (a2 > b2)
            printf("A");
        else
            printf("B");
    }
        

    
    


    return 0;
}