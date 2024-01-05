#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int cnt=0;
    scanf("%d",&n);
    int i=1;
    while (n>1){
        cnt+=1;
        n/=i;
        i++;
    }
    printf("%d",cnt);
    return 0;
}