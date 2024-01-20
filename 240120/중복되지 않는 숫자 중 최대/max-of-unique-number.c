#include <stdio.h>
#include <limits.h>
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int arr[1000];
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=INT_MIN;
    for (int i=0;i<n;i++){
        if (max<arr[i]){
            max=arr[i];
        }
        else if (max==arr[i]){
            max=INT_MIN;
        }
    }
    if (max==INT_MIN){
        printf("-1");
    }
    else{
        printf("%d",max);
    }
    return 0;
}