#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    scanf("%d%d",&a,&b);
    if (b%2==0){
        b-=1;
    }
    for (b;b>=a;b-=2){
        printf("%d ",b);
    }
    return 0;
}