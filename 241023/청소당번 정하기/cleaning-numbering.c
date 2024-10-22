#include <stdio.h>

int main() {
    int day,i,clas=0,bath=0,hall=0;
    scanf("%d",&day);
    /*
    2일 교실 clas
    3일 복도 hall
    12일 화장실 bath
    날짜가 겹치면 주기 긴걸로( ex)복도랑 화장실 겹치면 화장실 )
    */

    
    for(i = 0; i<day;i++){
        if(i%2==0){
            if(i%3==0){
                if(i%12==0){
                    bath++;
                }
                else{
                    bath++;
                } 
            }
            else{
                clas++;
            }
        }
        else if(i%3==0){
            if(i%12==0){
                bath++;
            }
            else{
                hall++;
            }
        }
        else if(i%12==0)
            bath++;

        
    }
    printf("%d %d %d",clas,hall,bath);
    return 0;
}