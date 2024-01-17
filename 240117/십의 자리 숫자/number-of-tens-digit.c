#include <stdio.h>
int arr[10]={0,};
int main() {
    // 여기에 코드를 작성해주세요.
    for (;;){
        int a;
        scanf("%d",&a);
        if (a==0){
            break;
        }
        arr[a/10]++;
    }
    for (int i=1;i<=9;i++){
        printf("%d - %d\n",i,arr[i]);
    }
    return 0;
}