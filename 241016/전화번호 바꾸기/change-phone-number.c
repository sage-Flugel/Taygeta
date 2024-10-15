#include <stdio.h>

int main() {
    /*010은 문자열로 했을 시
    int mid,end,trash;
    char start[]="010";
    scanf("%d-%d-%d",&trash,&mid,&end);

    printf("%s-%d-%d",start,end,mid);
    */
    int mid,end;
    
    scanf("010-%d-%d",&mid,&end);

    printf("010-%d-%d",end,mid);
    
    
    return 0;
}