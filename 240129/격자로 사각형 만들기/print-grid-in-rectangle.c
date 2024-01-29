#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d",&n);
    int arr[10][10];
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if (i==0 || j==0){
                arr[i][j]=1;
            }
            else{
                arr[i][j]=arr[i-1][j-1]+arr[i][j-1]+arr[i-1][j];
            }
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}