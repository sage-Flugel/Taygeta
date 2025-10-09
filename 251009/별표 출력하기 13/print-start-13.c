#include <stdio.h>

int main() {
    int a,i,j,cnt=1;
    scanf("%d",&a);
    int ucnt=a;
//홀수감소 짝수 증가
    for(i=1;i<=a*2;i++){
        if(i%2==0){
            for(j=1;j<=cnt;j++){
                printf("* ");
            }
            cnt++;
        }
        else{
            for(j=ucnt;j>0;j--){
                printf("* ");
            }
            ucnt--;
        }

        printf("\n");
    }
    
	return 0;
	
}

