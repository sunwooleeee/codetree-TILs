#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    int i,j;
    int cnt=1;
    int arr[100][100];
    scanf("%d%d",&n,&m);
    for (int k=0;k<n+m-1;k++){
        if (k>=m-1){
            i=k-m+1;
            j=m-1;
        }
        else{
            i=0;
            j=k;

        }
        for (;;){
            arr[i][j]=cnt;
            cnt++;
            if ((i==n-1) || (j==0)){
                break;
            }
            i++;
            j--;
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