#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    scanf("%d",&a);
    int b,c,d,e;
    scanf("%d%d%d%d",&b,&c,&d,&e);
    a>b ? printf("1\n") : printf("0\n");
    a>c ? printf("1\n") : printf("0\n");
    a>d ? printf("1\n") : printf("0\n");
    a>e ? printf("1\n") : printf("0\n");
    
    return 0;
}