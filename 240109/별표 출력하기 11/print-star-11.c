#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d",&n);
    for (int i=1;i<=2*n+1;i++){
        for (int j=1;j<=2*n+1;j++){
            if ((i%2==0) && (j%2==0)){
                printf("  ");
            }
            else{
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}