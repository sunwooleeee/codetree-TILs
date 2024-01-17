#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int cnt_arr[10]={0,};
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        int a;
        scanf("%d",&a);
        cnt_arr[a]++;
    }
    for (int i=1;i<=9;i++){
        printf("%d\n",cnt_arr[i]);
    }
    return 0;
}