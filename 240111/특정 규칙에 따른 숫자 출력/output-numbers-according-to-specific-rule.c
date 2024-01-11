#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int cnt=0;
    scanf("%d",&n);
    for ( int i=n;i>=1;i--){
        for (int j=1;j<=n-i;j++){
            printf("  ");
        }
        for (int j=i;j>=1;j--){
            if (cnt==9){
                cnt=0;
            }
            cnt+=1;
            printf("%d ",cnt);
        }
        printf("\n");
    }
    return 0;
}