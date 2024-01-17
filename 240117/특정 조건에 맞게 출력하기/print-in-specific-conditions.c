#include <stdio.h>
#include <stdbool.h>
int main() {
    // 여기에 코드를 작성해주세요.
    int i=0;
    int arr[100];
    for (;;){
        scanf("%d",&arr[i]);
        i++;
        if (arr[i-1]==0){
            i--;
            break;
        }
    }
    for (int j=0;j<i;j++){
        if (arr[j]%2==0){
            printf("%d ",arr[j]/2);
        }
        else{
            printf("%d ",arr[j]+=3);
        }
    }
    return 0;
}