#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int cnt=0;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            cnt+=1;
            printf("%d ",cnt);
        }
        printf("\n");
    }
    return 0;
}