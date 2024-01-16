#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int sum=0;
    int cnt=10;
    int arr[10];
    for (int i=0;i<10;i++){
        scanf("%d",&arr[i]);
        if (arr[i]==0){
            cnt=i;
            break;
        }
        sum+=arr[i];
        
    }
    printf("%d %.1lf",sum,(double)sum/cnt);
    return 0;
}