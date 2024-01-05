#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int sum=0,cnt=0;
    for (;;){
        scanf("%d",&n);
        if ((n<20) || (n>29)){
            printf("%.2lf",(double)sum/cnt);
            break;
        }
        cnt++;
        sum+=n;
    }
    return 0;
}