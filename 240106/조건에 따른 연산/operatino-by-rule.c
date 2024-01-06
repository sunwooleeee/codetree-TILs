#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int cnt=0;
    int n;
    scanf("%d",&n);
    while (n<1000){
        cnt++;
        if (n%2==0){
            n=3*n+1;

        }
        else{
            n=2*n+2;;
        }
    }
    printf("%d",cnt);
    return 0;
}