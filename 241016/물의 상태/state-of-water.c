#include <stdio.h>

int main() {
    int temp = 0;
    scanf("%d",&temp);

    if (temp < 0)
        printf("ice");
    else if (temp >= 100)
        printf("vapor");
    else
        printf("water");

    return 0;
}