#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int cnt=0;
    int n;
    int arr[100];
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if (arr[i]==2){
            cnt+=1;
            if (cnt==3){
                printf("%d",i+1);
                break;
            }
        }
    }
    return 0;
}