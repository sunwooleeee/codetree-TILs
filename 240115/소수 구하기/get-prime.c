#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        int cnt=0;
        for (int j=2;j<=i;j++){
            if (i%j==0){
                cnt+=1;
            }
        }
        if (cnt==1){
            printf("%d ",i);
        }
    }
    return 0;
}