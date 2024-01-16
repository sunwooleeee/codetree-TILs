#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];
    int sum_val=0;
    for (int i=0;i<10;i++){
        scanf("%d",&arr[i]);
        sum_val+=arr[i];
    }
    printf("%d",sum_val);
    return 0;
}