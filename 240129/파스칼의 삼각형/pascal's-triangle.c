#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[15][15];
    int n;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        for (int j=0;j<=i;j++){
            if (i==0 || j==0) {
                arr[i][j]=1;
            }
            else{
                arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
            }
        }
    }
     for (int i=0;i<n;i++){
        for (int j=0;j<=i;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}