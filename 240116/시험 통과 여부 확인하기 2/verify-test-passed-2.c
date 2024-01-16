#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int cnt=0;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        int arr[4];
        int sum=0;
        for (int j=0;j<4;j++){
            scanf("%d",&arr[j]);
            sum+=arr[j];
        }
        if ((double)sum/4>=60){
            printf("pass\n");
            cnt+=1;
        }
        else{
            printf("fail\n");
        }
    }
    printf("%d",cnt);
    return 0;
}