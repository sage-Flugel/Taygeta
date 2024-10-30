#include <stdio.h>

int main() {
    int a,i;
    while(1){
        scanf("%d",&a);
        if(a == 1)
            printf("John\n");
        else if (a == 2)
            printf("Tom\n");
        else if (a == 3)
            printf("Paul\n");
        else if (a == 4)
            printf("Sam\n");
        else{
            printf("Vacancy");
            break;
        }
    }
    return 0;
}