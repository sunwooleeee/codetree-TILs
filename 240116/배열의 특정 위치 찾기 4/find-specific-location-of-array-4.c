#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int sum=0;
    int cnt=0;
    int arr[10];
    for (int i=0;i<10;i++){
        scanf("%d",&arr[i]);
        if (arr[i]==0){
            break;
        }
        else if (arr[i]%2==0){
            sum+=arr[i];
            cnt+=1;
            
        }
    }
    printf("%d %d",cnt,sum);
    return 0;
}