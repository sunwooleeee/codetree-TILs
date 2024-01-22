#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    scanf("%d%d",&n,&m);
    int arr[10][10] = {};
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}