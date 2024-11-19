#include <stdio.h>

int main() {
    int n, i, j;

    // 사용자 입력
    scanf("%d", &n);

    // 위쪽 절반
    for (i = 0; i < n; i++) {
        // 공백 출력
        for (j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        // 별 출력
        for (j = 0; j < (2 * i) + 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // 아래쪽 절반
    for (i = n - 2; i >= 0; i--) {
        // 공백 출력
        for (j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        // 별 출력
        for (j = 0; j < (2 * i) + 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
