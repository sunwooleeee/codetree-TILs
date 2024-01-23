#include <stdio.h>
#include <limits.h>
int main() {
    // 여기에 코드를 작성해주세요.
    int arr[1001];
    int min=INT_MAX;
    int max=INT_MIN;
    for (int j=0;j<10;j++){
        int val;
        scanf("%d",&val);
        arr[val]++;
    }
    for (int i=0;i<=499;i++){
        if (arr[i]>=1 && max<i){
            max=i;
        }
    }
    for (int i=501;i<=1000;i++){
        if (arr[i]>=1 && min>i){
            min=i;
        }
    }
    printf("%d %d",max,min);
    return 0;
}