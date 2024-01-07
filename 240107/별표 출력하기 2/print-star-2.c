#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int i;
    scanf("%d",&n);
    for (n;n>=1;n--){
        i=n;
        for (i;i>=1;i--){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}