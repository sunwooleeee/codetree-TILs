#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[100]={0,};
    int a,b;
    scanf("%d %d",&a,&b);
    for (;;){
        if (a<=1){
            break;
        }
        arr[a-(a/b)*b]++;
        a=a/b;
    }
    int sum=0;
    for (int i=0;i<100;i++){
        sum+=arr[i]*arr[i];
    }
    printf("%d",sum);
    return 0;
}