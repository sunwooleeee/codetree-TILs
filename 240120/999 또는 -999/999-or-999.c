#include <stdio.h>
#include <limits.h>
int main() {
    // 여기에 코드를 작성해주세요.
    int max_val=INT_MIN;
    int min_val=INT_MAX;
    int arr[100];
    for (int i=0;i<100;i++){
        scanf("%d",&arr[i]);
        if ((arr[i]==999) || (arr[i]==-999)){
            break;
        }
        if (arr[i]>max_val){
            max_val=arr[i];
        }
        if (arr[i]<min_val){
            min_val=arr[i];
        }
    }
    printf("%d %d",max_val,min_val);
    return 0;
}