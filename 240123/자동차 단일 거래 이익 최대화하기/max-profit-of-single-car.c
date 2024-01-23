#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int arr[1000];
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int dif=0;
    for (int i=0;i<n;i++){
        for (int j=i;j<n;j++){
            if ((arr[j]-arr[i])>dif){
                dif=arr[j]-arr[i];
            }
        }
    }
    printf("%d",dif);
    return 0;
}