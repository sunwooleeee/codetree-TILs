#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    scanf("%d",&a);
    if (a==2){
        printf("28");
    }
    else if (a<=7){
        if (a%2==0){
            printf("30");
        }
        else {
            printf("31");
        }
    }
    else {
        if (a%2==0){
            printf("31");        
            }
       else{
        printf("30");
        }
    }
    return 0;
}