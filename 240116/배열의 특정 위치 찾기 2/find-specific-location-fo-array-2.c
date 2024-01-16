#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];
    for (int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    int sum_a=0;
    int sum_b=0;
    for (int i=0;i<10;i+=2){
        sum_a+=arr[i];
    }
    for (int i=1;i<10;i+=2){
        sum_b+=arr[i];
    }
    if (sum_a>=sum_b){
        printf("%d",sum_a-sum_b);
    }
    else{
        printf("%d",sum_b-sum_a);
    }
    return 0;
}