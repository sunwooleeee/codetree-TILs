#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d",&n);
    int cnt=0;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            if (cnt==8){
                cnt=0;
            }
            cnt+=2;
            printf("%d ",cnt);
        }
        printf("\n");
    }
    return 0;
}