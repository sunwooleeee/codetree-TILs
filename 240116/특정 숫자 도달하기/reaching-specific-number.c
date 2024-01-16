#include <stdio.h>
int main() {
    // 여기에 코드를 작성해주세요.
    int cnt=0;
    int arr[10];
    int sum=0;
    for (int i=0;i<10;i++){

        scanf("%d",&arr[i]);
        if ((arr[i])>=250){
            break;
        }
        cnt+=1;
        sum+=arr[i];
    }
    printf("%d %.1lf",sum,(double)sum/cnt);
    return 0;
}