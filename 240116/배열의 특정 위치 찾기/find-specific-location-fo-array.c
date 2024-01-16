#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int cnt=0;
    int sum=0;
    int sum_a=0;
    int arr[10];
    for (int i=0;i<=9;i++){
        scanf("%d",&arr[i]);
        if (i%2!=0){
            sum+=arr[i];
        }
        else if ((i+1)%3==0){
            cnt+=1;
            sum_a+=arr[i];
        }
    }
    printf("%d %.1lf",sum,(double)sum_a/cnt);
    return 0;
}