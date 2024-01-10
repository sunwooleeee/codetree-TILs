#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d",&n);
    int cnt=10;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            if (cnt==1){
                cnt=10;
            }
            cnt-=1;
            printf("%d",cnt);
        }
        printf("\n");
    }
    return 0;
}