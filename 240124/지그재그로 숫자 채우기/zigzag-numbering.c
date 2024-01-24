#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int cnt=0;
    int n,m;
    int arr[100][100];
    scanf("%d%d",&n,&m);
    for (int j=0;j<m;j++){
        for (int i=0;i<n;i++){
            if (j%2==0){
                arr[i][j]=cnt;
                cnt+=1;
            }
            else{
                arr[n-1-i][j]=cnt;
                cnt+=1;
            }
        }
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}