#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int cnt=0;
    int k=1;
    scanf("%d",&n);
    for (;;){
        if (n==k){
            printf("%d",cnt);
            break;
        }
        k*=2;
        cnt+=1;
    }
    return 0;
}