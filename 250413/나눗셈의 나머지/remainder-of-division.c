#include <stdio.h>

int main() {
    int la,a,b,k=0,i;
    int arr[20] = {0};
    int cntarr[15] = {0};
    int last[15] = {0};
    scanf("%d %d",&a,&b);

    for(i=0; i<15;i++){
        
        arr[i] = a%b;
        cntarr[arr[i]]++;
        a = a / b;

        if(la == a)
            break;
        la = a;
    }
    cntarr[0]-=1;
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

/*
나머지가 나눈 수와 같다면 끝난거
나머지가 몇인가는 관계없이 그냥 2번 나온거면 2를 제곱
5번 나온거면 5의 제곱을 하는식이다

*/