#include <stdio.h>
// i % 100 == 0 && i % 400 != 0 은 평년
int main() {
    int a,i,cnt=0;
    scanf("%d",&a);

    for(i = 1; i<=a;i++){
        if(i % 4 == 0){
            if(i % 100 == 0 && i % 400 != 0)
                cnt = cnt;
            else
                cnt++;
        }
        
        

    }
    printf("%d",cnt);
    return 0;
}