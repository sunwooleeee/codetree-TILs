#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d",&n);
    for (n;n>=1;n--){
        for (int i=n;i>=1;i--){
            for (int j=n;j>=1;j--){
                printf("*");
            }
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}