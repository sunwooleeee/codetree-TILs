#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[100];
    int n;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    for (int i=0;i<n;i++){
        arr[i]=arr[i]*arr[i];
    }
    for (int j=0;j<n;j++){
        printf("%d ",arr[j]);
    }
    return 0;
}