#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int cnt3=0;
    int cnt5=0;
    int k;
    for (int i=1;i<=10;i++){
        scanf("%d",&k);
        if (k%3==0){
            cnt3++;
        }
        if (k%5==0){
            cnt5++;
        }
    }
    printf("%d %d",cnt3,cnt5);
    return 0;
}