#include <iostream>
using namespace std;

int main() {
    int a[10];
    int big = 0;
    for(int i=0;i<10;i++){
        scanf("%d ",&a[i]);
        if(a[i] > big)
            big = a[i];
}
    printf("%d",big);

    return 0;
}