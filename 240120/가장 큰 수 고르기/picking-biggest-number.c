#include <stdio.h>
#include <limits.h>
int main() {
    // 여기에 코드를 작성해주세요.
    int max_val=INT_MIN;
    int arr[10];
    for (int i=0;i<10;i++){
        scanf("%d",&arr[i]);
        if (arr[i]>=max_val){
            max_val=arr[i];
        }
    }
    printf("%d",max_val);
    return 0;
}