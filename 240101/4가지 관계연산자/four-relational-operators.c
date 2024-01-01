#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    scanf("%d%d",&a,&b);
    a>=b ? printf("1\n"):printf("0\n");
    a>b ? printf("1\n"):printf("0\n");
    b>=a ? printf("1\n"):printf("0\n");
    b>a ? printf("1\n"):printf("0\n");
    return 0;
}