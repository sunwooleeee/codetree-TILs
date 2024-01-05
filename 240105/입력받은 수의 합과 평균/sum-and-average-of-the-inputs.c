#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int sum=0;
    int a;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        scanf("%d",&a);
        sum+=a;
    }
    printf("%d %.1lf",sum,(double)sum/n);
    return 0;
}