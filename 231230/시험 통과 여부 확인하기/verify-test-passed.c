#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d",&n);
    if (n>=80){
        printf("pass");
    }
    else {
        int b;
        b=80-n;
        printf("%d more score",b);
    }
    return 0;
}