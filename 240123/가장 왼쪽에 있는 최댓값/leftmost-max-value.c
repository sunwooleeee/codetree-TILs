#include <stdio.h>
#include <limits.h>
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d",&n);
    int arr[1000];
    for (int i=1;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    int idx=n;
    while (idx!=0){
        int max=INT_MIN;
        int max_idx;
        for (int i=1;i<=idx;i++){
            if (max<arr[i]){
                max=arr[i];
                max_idx=i;
                
            }
        }
        idx=max_idx;
        printf("%d ",idx);
        idx--;
    }
    return 0;
}