#include <stdio.h>
#include <limits.h>
int main() {
    // 여기에 코드를 작성해주세요.
    int max_val=INT_MIN;
    int maxmax_val=INT_MIN;
    int n;
    scanf("%d",&n);
    int temp;
    int arr[100];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
       
        if ((arr[i]>=maxmax_val) && (arr[i]>=max_val)){
            max_val=maxmax_val;
            maxmax_val=arr[i];
            
        }
        else if ((arr[i]<=maxmax_val) && (arr[i]>=max_val)){
            max_val=arr[i];
        }
    }
    printf("%d %d",maxmax_val,max_val);
    return 0;
}