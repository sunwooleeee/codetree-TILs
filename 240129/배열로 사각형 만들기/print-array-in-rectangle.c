#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[5][5];
    for (int i=0;i<5;i++){
        for (int j=0;j<5;j++){
            if (i==0){
                arr[i][j]=1;
            }
            else if (j==0){
                arr[i][j]=1;
            }
            else {
                arr[i][j]=arr[i-1][j]+arr[i][j-1];
            }
        }
    }
    for (int i=0;i<5;i++){
        for (int j=0;j<5;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}