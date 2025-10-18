#include <stdio.h>
#include <limits.h>
//내림차순 정렬 
// 큰수가 가장 왼쪽
int main() {
    int n,i,cnt=0;

    int bigst = INT_MIN;
    int scnd = INT_MIN;

    int a[100];

    scanf("%d",&n);
////////////////////////////////////////////////////////
    for(i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }
///////////////////////////////////////////////////////////

    for(i=0;i<n;i++){ //1번째 항 만들기
        if(a[i] > bigst){
            bigst = a[i];
            cnt=i;
            }
    }
    
    for(i=0;i<n;i++){ //2번째 항 만들기
        if(a[i] == bigst && i !=cnt) //1항 2항이 같을 경우
            scnd = a[i];
        else{
            if(a[i] < bigst && scnd < a[i])
                scnd = a[i];
        }


            
    }

    printf("%d %d",bigst,scnd);









    return 0;
}