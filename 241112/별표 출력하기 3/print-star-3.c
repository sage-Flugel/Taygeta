#include <stdio.h>

int main() {
    int a;
    // 정수 a 입력받기
    scanf("%d", &a);

    // 첫 번째 줄부터 마지막 줄까지
    for (int i = 0; i < a; i++) {
        // 각 줄의 앞에 공백 출력
        for (int j = 0; j < 2 * i; j++) { // 공백은 2*i만큼 증가
            printf(" ");
        }
        
        // 각 줄에 출력할 별표 개수
        for (int k = 0; k < 2 * (a - i) - 1; k++) { // 별은 2*(a-i)-1 만큼 출력
            printf("*");
            if (k < 2 * (a - i) - 2) {  // 별표 사이에 공백 추가
                printf(" ");
            }
        }
        printf("\n"); // 줄 바꿈
    }

    return 0;
}
