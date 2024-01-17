#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[11]={0,};
    for (;;){
        int a;
        scanf("%d",&a);
        if (a==0){
            break;
        }
        arr[a/10]++;
    }
    for (int i=100;i>=10;i-=10){
        printf("%d - %d\n",i,arr[i/10]);
    }
    return 0;
}