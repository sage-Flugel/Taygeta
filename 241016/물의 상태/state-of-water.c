#include <stdio.h>

int main() {
    int temp = 0;
    scanf("%d",&temp);

    if (temp > 100)
        printf("vapor");
    else if (temp < 0)
        printf("ice");
    else (temp < 100)
        printf("water");
    

    return 0;
}