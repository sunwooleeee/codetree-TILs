#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10][10];
    int n;
    int cnt=1;
    scanf("%d",&n);
    for (int j=0;j<n;j++){
        for (int i=0;i<n;i++){
            arr[i][j]=cnt;
            cnt++;
            
        }
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}