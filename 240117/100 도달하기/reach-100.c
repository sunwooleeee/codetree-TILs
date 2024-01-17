#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[100];
    int i=2;
    arr[0]=1;
    scanf("%d",&arr[1]);
    while (arr[i-1]<=100){
        arr[i]=arr[i-1]+arr[i-2];
        i++;
    }
    for (int j=0;j<i;j++){
        printf("%d ",arr[j]);
    }
    return 0;
}