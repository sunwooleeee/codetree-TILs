#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];
    for (int i=0;i<10;i++){
        if ((i==0) || (i==1)){
            scanf("%d",&arr[i]);
        }
        else{
            arr[i]=arr[i-1]+arr[i-2];
            if (arr[i]>=10){
                arr[i]-=10;
            }
        }
    }
    for (int i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}