/*#include <stdio.h>

int main() {
    int a,b,k=0,i;
    int arr[20] = {0};
    int cntarr[15] = {0};
    int last[15] = {0};
    scanf("%d %d",&a,&b);

    for(i=0; i<15;i++){
        if (a == 0) 
            break;  // a가 0되면 종료

        arr[i] = a % b;
        cntarr[arr[i]]++;

        a = a / b;
        
    }
    
    //여기까진 0~10까지의 수가 몇번 나왔는지 세는거임
    //그러면 그 몇번 나왔는지만 빼서 제곱해줘야지

    for(i=0;i<13;i++){
        if(cntarr[i] > 0){
            k += cntarr[i]*cntarr[i];
            
        }
        //printf("%d\n",cntarr[i]);
    }

    printf("%d",k);

    return 0;
}


*/
#include <stdio.h>

int main() {
    int a, b, k = 0, i;
    int cntarr[10] = {0};  // 최대 b=10이므로 배열 크기는 10

    scanf("%d %d", &a, &b);

    // a를 b진법으로 변환하여 각 자리의 나머지를 카운트
    while (a > 0) {
        int r = a % b;
        cntarr[r]++;
        a = a / b;
    }

    // 결과 계산
    for(i = 0; i < b; i++) {
        k += cntarr[i] * cntarr[i];
    }

    // 결과 출력
    printf("%d\n", k);
    return 0;
}


