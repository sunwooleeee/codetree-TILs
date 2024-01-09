#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        int a=2*i+9;
        for (int j=1;j<=n;j++){
            printf("%d ",a);
            a+=2;
        }
        printf("\n");
    }
    return 0;
}