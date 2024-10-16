#include <stdio.h>

int main() {
    int temp = 0;
    scanf("%d",&temp);

    if (temp > 100)
        printf("vapor");
    else if (temp < 100)
        printf("water");
    else if (temp < 0)
        printf("ice");

    return 0;
}