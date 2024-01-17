#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int cnt=0;
    int arr[100];
    int arr_1[100];
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n;i++){
        if (arr[i]%2==0){
            arr_1[cnt]=arr[i];
            cnt+=1;
        }
    }
    for (int i=0;i<cnt;i++){
        printf("%d ",arr_1[i]);
    }
    return 0;
}