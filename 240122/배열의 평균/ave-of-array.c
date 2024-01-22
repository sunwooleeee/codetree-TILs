#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[2][4];
    int sum=0;
    for (int i=0;i<2;i++){
        int sum_1=0;
        for (int j=0;j<4;j++){
            scanf("%d",&arr[i][j]);
            sum_1+=arr[i][j];
            sum+=arr[i][j];
        }
        printf("%.1lf ",(double)sum_1/4);

    }
    printf("\n");
    for (int j=0;j<4;j++){
        int sum_2=0;
        for (int i=0;i<2;i++){
            sum_2+=arr[i][j];
        }
        printf("%.1lf ",(double)sum_2/2);
    }
    printf("\n");
    printf("%.1lf",(double)sum/8);
    return 0;
}