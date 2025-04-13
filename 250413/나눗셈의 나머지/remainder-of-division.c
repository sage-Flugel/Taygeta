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
    int cntarr[15] = {0};

    scanf("%d %d", &a, &b);

    while (a >= 10) {
        int r = a % b;
        cntarr[r]++;
        a = a / b;
    }

    // 마지막 남은 a도 나머지 1회 처리 필요
    cntarr[a % b]++;

    for(i = 0; i < b; i++) {
        if(cntarr[i] > 0) {
            k += cntarr[i] * cntarr[i];
        }
    }

    printf("%d\n", k);

    return 0;
}
