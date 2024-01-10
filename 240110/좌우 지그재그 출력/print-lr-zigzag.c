#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d",&n);
    int cnt=1;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            if (i%2==0){
                printf("%d ",cnt);
                cnt-=1;
            }
            else{
                printf("%d ",cnt);
                cnt+=1;
            }
        }
        if (i%2==0){
            cnt+=n+1;
        }
        else{
            cnt+=n-1;
        }
        printf("\n");
    }
    return 0;
}